
def count_the_digit(n: int, k: int) -> int:
    
    digits: list[int] = []
    for i in range(n + 1):
        current_digit = i ** 2
        digits.append(current_digit)
    
    results: int = 0
    for digit in digits:
        digit = str(digit)
        for number in digit:
            if number == str(k):
                results += 1

    return results

if __name__ == "__main__":
    cases = int(input())

    for _ in range(cases):
        n, k = map(int, input().split())

        result = count_the_digit(n, k)
        print(result)