'''SOLVED'''
def move_zeros(list: list[int]) -> str:
    
    zeros: int = []
    original = []
    for num in list:
        if num == 0:
            zeros.append(num)
        else:
            original.append(num)
    
    number_of_zeros = len(zeros)
    for i in range(number_of_zeros):
        original.append(0)
    
    return original


if __name__ == "__main__":
    examples = [
        [1, 2, 0, 1, 0, 1, 0, 3, 0, 1],
        [1, 2, 5, 2, 4, 0, 1, 0]
    ]
    for example in examples:
        print(f"{example} equals: {move_zeros(example)}")
