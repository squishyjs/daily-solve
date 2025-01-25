# cook your dish here

from re import split

def solution():
    for _ in range(int(input())):
        number_of_problems = int(input())
        problems = [int(i) for i in input().split()]
        
        count: int = 0
        for problem in problems:
            if problem < 1000:
                continue
            count += 1

        print(count)

if __name__ == "__main__":
    solution() # output solution
