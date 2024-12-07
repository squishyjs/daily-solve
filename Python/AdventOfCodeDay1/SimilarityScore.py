def main() -> None:
    left_list = []
    right_list = []
    # get column values
    with open("puzzle_input.txt") as file:
        for line in file:
            values = line.split()
            left_list.append(int(values[0]))
            right_list.append(int(values[1]))

    similarity_score: int = 0
    for number_left in left_list:
        temp_count: int = 0
        for number_right in right_list:
            if number_right == number_left:
                temp_count += 1
        similarity_score += (temp_count * number_left) 
    
    print(similarity_score)


if __name__ == "__main__":
    main()