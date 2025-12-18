def swap_values(args):
    temp = args[0]
    args[0] = args[1]
    args[1] = temp


if __name__ == "__main__":
    arr = [1, 2]
    print("Values before: ")
    for num in arr:
        print(num)

    swap_values(arr)
    print("Values after: ")
    for num in arr:
        print(num)
