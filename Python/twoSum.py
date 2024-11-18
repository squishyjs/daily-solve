def get_sum_between_two_integers(integer_one: int, integer_two: int) -> int:
    lower_bound = min(integer_one, integer_two)
    higher_bound = max(integer_one, integer_two) + 1  # plus one to account for loss

    if (integer_one == 0) and (integer_two == 0):
        return 0

    return sum([int(i) for i in range(lower_bound, higher_bound)])


if __name__ == "__main__":

    result = get_sum_between_two_integers(4, 8)
    print(result)  # output the result
    print(4 + 5 + 6 + 7 + 8)  # manually check test result