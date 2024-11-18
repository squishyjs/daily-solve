# PROBLEM STATEMENT
'''
Write a function named first_non_repeating_letter† that takes a string input, and returns the first 
character that is not repeated anywhere in the string.

For example, if given the input 'stress', the function should return 't', since the letter t only 
occurs once in the string, and occurs first in the string.

As an added challenge, upper- and lowercase letters are considered the same character, but the 
function should return the correct case for the initial letter. For example, the input 'sTreSS' should 
return 'T'.

If a string contains all repeating characters, it should return an empty string ("");

† Note: the function is called firstNonRepeatingLetter for historical reasons, but your 
function should handle any Unicode character.
'''


def first_non_repeating_letter(string: str) -> str:
    string_length = len(string)
    original_string = string
    unique_letters = {}

    for i in range(string_length):
        current_letter = string[i].lower()
        if current_letter not in unique_letters:
            unique_letters[current_letter] = 1
            continue
        # otherwise
        unique_letters[current_letter] += 1
    
    # Loop original string
    for index, current_letter in enumerate(original_string):
        if unique_letters[current_letter.lower()] == 1:
            return current_letter
        
    return '' # Return empty if NONE found


def main():
    cases = int(input("Enter cases: "))
    for _ in range(cases):
        string = input("Enter string: ").strip()
        result = first_non_repeating_letter(string)
        print(f"First non-repeating letter is: {result}")

if __name__ == "__main__":
    main()

    # ''' FOR PYTHON DICTIONARY REFERENCE '''
    # dict = {'a': 1, 'b': 2, 'c': 3}
    # for key, value in dict.items():
    #     print(key+" "+ str(value))
    # output: 
    # # a 1
    # # b 2
    # # c 3

    # for key in dict:
    #     print(key+ " "+str(dict[key]))
    # # output: 
    # # b 2
    # # a 1
    # # c 3