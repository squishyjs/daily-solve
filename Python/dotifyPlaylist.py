# cook your dish here

def solve(n: int, k: int, l: int) -> int:
    songs = []
    for i in range(n):
        song, language = map(int, input().split())
        if (language == l):
            songs.append(song)

    # get highest lengthed songs
    songs.sort(reverse=True)
    
    if len(songs) < k:
        return -1

    return sum(songs[:k])


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        n, k, l = map(int, input().split())
        
        solution = solve(n, k, l)
        print(solution)

if __name__ == "__main__":
    main()
