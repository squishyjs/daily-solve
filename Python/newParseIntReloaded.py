def parse_int(string: str) -> int:
    # Convert the input string to lowercase
    string = string.lower()
    
    # Define dictionaries for number words
    single_digits = {
        'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4,
        'five': 5, 'six': 6, 'seven': 7, 'eight': 8, 'nine': 9,
        'ten': 10
    }
    
    teens = {
        'eleven': 11, 'twelve': 12, 'thirteen': 13, 'fourteen': 14,
        'fifteen': 15, 'sixteen': 16, 'seventeen': 17, 'eighteen': 18,
        'nineteen': 19
    }
    
    tens = {
        'twenty': 20, 'thirty': 30, 'forty': 40, 'fifty': 50,
        'sixty': 60, 'seventy': 70, 'eighty': 80, 'ninety': 90
    }
    
    multipliers = {
        'hundred': 100, 'thousand': 1000, 'million': 1000000
    }
    
    # Tokenize the string into words
    words = string.replace('-', ' ').split()
    
    current_value = 0
    total_value = 0
    
    for word in words:
        if word in single_digits:
            current_value += single_digits[word]
        
        elif word in teens:
            current_value += teens[word]
        
        elif word in tens:
            current_value += tens[word]
        
        elif word == 'hundred':
            current_value *= multipliers[word]
        
        elif word in multipliers:
            # If it's a multiplier like "thousand" or "million"
            current_value *= multipliers[word]
            total_value += current_value
            current_value = 0  # Reset for next group
        
        elif word == 'and':
            # Skip 'and' as it's optional
            continue
    
    # Add any remaining value to total_value
    total_value += current_value
    
    return total_value

# Testing the function with examples
if __name__ == "__main__":
    examples = [
        "one million",
        "two hundred forty-six",
        "three hundred and nine",
        "fifty thousand and nine",
        "four hundred and sixty-eight thousand five hundred and twelve",
        "five hundred and two thousand"
    ]
    
    for example in examples:
        print(f"{example} => {parse_int(example)}")
