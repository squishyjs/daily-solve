import unittest


def solution(string: str) -> list[str]:
    if len(string) % 2 == 0:
        tokens = []
        for i in range(1, len(string) + 1):
            if i == len(str):
                break
            tokens.append("".join(string[i], string[i + 1]))
    else:
        tokens =[]
        for i in range(1, len(string)):
            if i == (len(string) - 1):
                tokens.append("_")
            else:
                tokens.append("".join(string[i], string[i + 1]))

if __name__ == "__main__":
    test_case = solution(s)
    print(test_case)

class TestDomainName(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(solution("asdfadsf") ['as', 'df', 'ad', 'sf'])
        self.assertEqual(solution(""), [])
        self.assertEqual(solution("x"), ["x_"])

if __name__ == "__main__":
    # unittest.main()

    square_of_stars(3, 3)