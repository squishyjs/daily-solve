'''SOLVED'''
def alternate_string_solution(length: int, string: str) -> int:
    string_length = length

    count_zeros, count_ones = 0, 0
    for digit in string:
        # print(f"Current digit = {digit}")
        if digit == "0":
            count_zeros += 1
            continue
        if digit == "1":
            count_ones += 1
    # print(f"No of zeros: {count_zeros}, ones: {count_ones}")
    if count_zeros == count_ones:
        return string_length
    
    adjacent_pairs = min(count_zeros, count_ones)
    alternate_count = adjacent_pairs * 2
    
    return alternate_count + 1


if __name__ == "__main__":
    cases = int(input("Cases: "))
    for _ in range(cases):
        length = int(input("Length: "))
        string_example = input("String: ")
        print(alternate_string_solution(length, string_example))