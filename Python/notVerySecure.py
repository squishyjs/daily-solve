import re

'''SOLVING'''
def alphanumeric(password: str) -> bool:

    string: str = password
    pattern: str = r"^[a-zA-Z0-9]+$"

    match = re.search(pattern, string) # if criteria is met
    if match:
        return True 
    return False

def adjacent_double_double_letters(word: str) -> bool:

    string_length = len(word)
    for i in range(string_length - 3):
        current_letter = word[i]
        if current_letter == word[i + 1]:
            if word[i + 2] == word[i + 3]:
                return True
    return False

if __name__ == "__main__":
    examples = [
        "hello world_", # assert -> False
        "PassW0ord", # assert -> True
        "hiThere!", # assert -> True
        ""
    ]

    examples = [
        "hello", # False
        "helloo", # True
        "hellououuo", # False
        "hhellooo", # True
        "balloon", # True
        "baalon" # True
    ]
    for example in examples:
        print(f"{example} converts to: {adjacent_double_double_letters(example)}")