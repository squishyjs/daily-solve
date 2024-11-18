

class RomanNumerals:
    def to_roman(self, value: int) -> str:
        # local method dict copy
        roman_dictionary: dict[int, str] = {
            1000: 'M',
            900: 'CM',
            500: 'D',
            400: 'CD',
            100: 'C',
            90: 'XC',
            50: 'L',
            40: 'XL',
            10: 'X',
            9: 'IX',
            5: 'V',
            4: 'IV',
            1: 'I'
        }

        roman_string: str = ""
        # handle conversion 
        while value > 0:
            val = 0
            for key in roman_dictionary.keys():
                if value >= key:
                    current_roman = roman_dictionary[key] # get the roman
                    roman_string += current_roman
                    val = key
                    # print(f"Roman string is {roman_string}")
                    break
            value -= val
        
        return roman_string
        
    
    def from_roman(self, roman_num: str) -> int:
        roman_dictionary = {
            'M': 1000,
            'CM': 900,
            'D': 500,
            'CD': 400,
            'C': 100,
            'XC': 90,
            'L': 50,
            'XL': 40,
            'X': 10,
            'IX': 9,
            'V': 5,
            'IV': 4,
            'I': 1
        }
        roman_num_length = len(roman_num)
        digits = []
        pos = 0
        while pos < roman_num_length:
            current_roman = roman_num[pos]
            current_two_romans = "".join(roman_num[pos:pos + 2]) # check if two romans match dictionary

            if current_two_romans in roman_dictionary:
                digits.append(roman_dictionary[current_two_romans])
                pos += 2  # move to next roman numeral
            else:
                digits.append(roman_dictionary[current_roman])
                # print(digits)
                pos += 1  # else a single roman digit, so move iterate one pos next

        # print(digits)
        return sum(digits)
    
    def roman_num_length(self, roman_num: str) -> int:
        return len(roman_num)
    
    def roman_to_value_book(self, symbol: str) -> int:
        roman_dictionary = {
            'M': 1000,
            'CM': 900,
            'D': 500,
            'CD': 400,
            'C': 100,
            'XC': 90,
            'L': 50,
            'XL': 40,
            'X': 10,
            'IX': 9,
            'V': 5,
            'IV': 4,
            'I': 1
        }
        try:
            return roman_dictionary[symbol]
        except KeyError:
            return False
    
    def value_to_roman_book(self, number: int) -> str:
        roman_dictionary = {
            1000: 'M',
            900: 'CM',
            500: 'D',
            400: 'CD',
            100: 'C',
            90: 'XC',
            50: 'L',
            40: 'XL',
            10: 'X',
            9: 'IX',
            5: 'V',
            4: 'IV',
            1: 'I'
        }
        return roman_dictionary[number]


if __name__ == "__main__":
    # # example = "MMXC"
    instance = RomanNumerals()
    # # print(instance.from_roman(example))

    example = "MDCLXVI" # -> assert("MDCLXVI", 1666)
    print(f"MDCLXVI = {instance.from_roman(example)}")

    example_two = "LXXXVI" # -> assert("LXXXVI", 86)
    print(f"LXXXVI = {instance.from_roman(example_two)}")

    example_three = "I" # -> assert("I", 1) == true
    print(f"I = {instance.from_roman(example_three)}")

    example_four = "IV" # -> assert("IV", 4) == true
    print(f"IV = {instance.from_roman(example_four)}")

    # example = 2000
    # print(f"2000 = {instance.to_roman(example)}")

    # example_two = 1666
    # print(f"1666 = {instance.to_roman(example_two)}")
