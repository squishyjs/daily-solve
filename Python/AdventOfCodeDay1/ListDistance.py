
def calculate_difference(integer_1: int, integer_2: int) -> int:
    return abs(integer_1 - integer_2)

def main() -> None:
    list1 = []
    list2 = []
    # get column values
    with open("puzzle_input.txt") as file:
        for line in file:
            values = line.split()
            list1.append(int(values[0]))
            list2.append(int(values[1]))

    # sort each list
    list1.sort()
    list2.sort()
    
    # calculate distances sum
    total_sum: int = 0
    for i in range(1000):
        total_sum += (calculate_difference(list1[i], list2[i]))

    # final answer
    print(total_sum)   



if __name__ == "__main__":
    main()