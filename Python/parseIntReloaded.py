'''SOLVING'''
def parse_int(string: str) -> int:
    string: str = string.lower()
    string_length: int = len(string)
    final_digit: int = 0
    # first tokenize string into words
    word_list: list[int] = []
    buffer: str = ""
    is_and: bool = False
    temp_digit: int = 0

    for token in string:
        if (token == " ") or (token == "-"):
            if buffer:
                word_list.append(buffer)
                buffer = "" # reset buffer
            continue
        buffer += token
    if buffer:
        word_list.append(buffer) # final flush buffer

    single_digits = {
        'one': 1,
        'two': 2,
        'three': 3,
        'four': 4,
        'five': 5,
        'six': 6,
        'seven': 7,
        'eight': 8,
        'nine': 9,
        'ten': 10
    }

    unique_digits = {
        'eleven': 11,
        'twelve': 12,# unique digit = twelve in orientation
        'thirteen': 13,
        'fourteen': 14,
        'fifteen': 15,
        'sixteen': 16,
        'seventeen': 17,
        'eighteen': 18,
        'nineteen': 19,
        # TOTHINK: split unique digits between 10-20, and 20-90
        'twenty': 20,
        'thirty': 30,
        'forty': 40,
        'fifty': 50,
        'sixty': 60,
        'seventy': 70,
        'eighty': 80,
        'ninety': 90
    }

    # do some code that handles conversion
    for index, word_digit in enumerate(word_list):
        if (word_digit == " "): # if empty, skip
            continue 
        if (word_digit == "million"): # edge case -> 'one million'
            return 1_000_000
        
        if word_digit in single_digits: # if single digit
            number = single_digits[word_digit]
            if index == (len(word_list) - 1): # is last digit
                final_digit += number
                continue
            if word_list[index + 1] == "hundred": # if next word is hundred
                number *= 100
                if index + 2 < len(word_list) - 1: # if still more after
                    if word_list[index + 2] == "thousand": # if thousand occurs
                        number *= 1000
                    if word_list[index + 2] == "and":
                        temp_digit += number
            elif word_list[index + 1] == "thousand": # if next word is thousand
                number *= 1000
            
            print(f"The current number is: {number}")
            final_digit += number
                    
        
        if word_digit in unique_digits: # if unique digit
            number = unique_digits[word_digit]
            if index == (len(word_list) - 1): # is last digit
                final_digit += number
                continue
            if word_list[index + 1] in single_digits: # for example, sixty-eight -> 60 + 8
                number += single_digits[word_list[index + 1]] 
                if index + 2 < (len(word_list) - 1): # if more after
                    if word_list[index + 2] == "thousand": # if thousand
                        number *= 1000
                        print(f"current number is: {number}")
                        if temp_digit > 0:
                            temp_digit *= 1000
                            number += temp_digit
                            final_digit += number
                            print(f"current number is: {number}")
                            temp_digit = 0
                            continue

            if word_list[index + 1] == "thousand":
                number *= 1000
                if temp_digit > 0:
                    temp_digit *= 1000
                    # print(f"Temp digit = {temp_digit}")
                    number += temp_digit
                    final_digit += number 
                    temp_digit = 0 # reset temp_digit
                    continue

            
            final_digit += number

    return final_digit


if __name__ == "__main__":
    # Edge case 1:
    examples = [
        "one million", # first edge case -> a million
        "two hundred forty-six",
        "three hundred and nine",
        "fifty thousand and nine",
        "four hundred and sixty-eight thousand five hundred and twelve",
        "five hundred and two thousand"
    ]
    for example in examples:
        print(f"{example} => {parse_int(example)}")