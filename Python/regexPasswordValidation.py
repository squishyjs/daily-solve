import re

'''SOLVED'''
def is_digit(character: str) -> bool:
    return character in "1234567890"

def minimum_password_length(password_length: int) -> bool:
    return password_length >= 6

def is_upper(character: str) -> bool:
    return character.isupper()

def is_lower(character: str) -> bool:
    return character.islower()

def is_alpha_numeric(character: str) -> bool:
    alpha_numeric = "1234567890abcdefghijklmnopqrstuvwxyz"
    return character.lower() in alpha_numeric

def validate_password(password: str) -> bool:
    password_length: int = len(password)
    contains_upper_case: bool = False
    contains_lower_case: bool = False
    contains_digit: bool = False
    contains_only_alphanumeric: bool = True

    if not minimum_password_length(password_length):
        return False

    for token in password:
        if is_digit(token):
            contains_digit = True
        if is_lower(token):
            contains_lower_case = True
        if is_upper(token):
            contains_upper_case = True
        if not is_alpha_numeric(token):
            contains_only_alphanumeric = False

    if contains_digit and contains_lower_case and contains_upper_case and contains_only_alphanumeric:
        return True
    return False

def regex_validate(password: str) -> bool:

    my_regex_pattern: str = r'^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)[a-zA-Z0-9]{6,}$'
    alexander_korygin_regex_pattern: str = (
        '^'            # start line
        '(?=.*\d)'     # must contain one digit from 0-9
        '(?=.*[a-z])'  # must contain one lowercase characters
        '(?=.*[A-Z])'  # must contain one uppercase characters
        '[a-zA-Z\d]'   # permitted characters (alphanumeric only) | NOTE: \d <-> [0-9]
        '{6,}'         # length at least 6 chars
        '$'            # end line
    )
    string: str = password
    match = re.search(my_regex_pattern, string)

    if match:
        return True
    return False

if __name__ == "__main__":
    examples = [
        "fjd3IR9",  # True
        "ghdfj32",  # False
        "DSJKHD23", # False
        "4fdg5Fj3", # True
    ]
    for password in examples:
        print(f"{password} = {regex_validate(password)}")