# cook your dish here
# from Python.chefLandLibrary import test_cases

def solution(n: int, memories: list[int]) -> int:

    allocated_memory: int = 0
    count_alloc: int = 0

    for i in range(n):
        curr_memory = memories[i]

        if allocated_memory < curr_memory: # need to allocate
            difference: int = curr_memory - allocated_memory
            allocated_memory += difference
            count_alloc += difference
       
        if allocated_memory > curr_memory: # need to deallocate
            difference: int = allocated_memory - curr_memory
            allocated_memory -= difference

    return count_alloc

def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):

        n = int(input())
        memory_slots = [int(i) for i in input().split()]
        result = solution(n, memory_slots)
        print(result)

if __name__ == "__main__":
    main()
