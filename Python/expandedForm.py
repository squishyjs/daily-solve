import unittest


def to_string(number: int) -> str:
    return str(number)

def expanded_form(number: int) -> str:
    number = to_string(number)
    number_length = len(str(number))
    expanded_number_form = ""

    for i in range(number_length):
        # print(f"i: {number[i]}")
        if number[i] == "0":
            continue
        if number[i] != "0":
            current_number = number[i]
            trailing_zeros = 0
            is_last = True

            for j in range(i + 1, number_length):
                # print(f"j: {number[j]}")
                if number[j] != "0":
                    is_last = False
                trailing_zeros += 1

            if i == (number_length - 1) or (is_last):
                expanded_number_form += str(current_number) + (trailing_zeros * "0")
            else:
                expanded_number_form += str(current_number) + (trailing_zeros * "0") + " + "

    return expanded_number_form

def optimised_expanded_form(number: int) -> str:
    expanded_string = []
    length = len(str(number)) - 1 
    for char in str(number):
        if char != '0':
            expanded_string.append(str(char + length * '0'))
        length -= 1
    # print(expanded_string)
    return ' + '.join(expanded_string)

def main():
    foo_num = int(input("Enter a positive integer: "))
    expanded_foo_num = optimised_expanded_form(foo_num)
    print(expanded_foo_num)

class TestExpandedForm(unittest.TestCase):
    def test_expanded_form(self):
        self.assertEqual(expanded_form(12), "10 + 2")
        self.assertEqual(expanded_form(113), "100 + 10 + 3")
        self.assertEqual(expanded_form(5601), "5000 + 600 + 1")

if __name__ == "__main__":
    # unittest.main()
    # for _ in range(int(input("Enter cases: "))):
    #     number = int(input("Enter number: "))
    #     print(f"Function outputs: {expanded_form(number)}")
    main()