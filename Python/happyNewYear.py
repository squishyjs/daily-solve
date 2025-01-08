# cook your dish here

def solution(x: int) -> int:
    
    DECEMBER_DAYS = 24
    
    return DECEMBER_DAYS - x


if __name__ == "__main__":
    x = int(input())

    print(solution(x))
