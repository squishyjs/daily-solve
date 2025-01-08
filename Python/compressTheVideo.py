# cook your dish here
def solution(n: int, frames: list[int]) -> int:
    number_of_frames = len(frames)

    if number_of_frames == 1:
        return 1
    
    # find similar adjacent frame pairs
    count: int = 1
    for i in range(n - 1):
        curr_frame: int = frames[i]
        next_frame: int = frames[i + 1]
        
        if curr_frame != next_frame:
            count += 1

    return count

if __name__ == "__main__":
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())
        frames = [int(i) for i in input().split()]

        answer = solution(n, frames)
        print(answer)
