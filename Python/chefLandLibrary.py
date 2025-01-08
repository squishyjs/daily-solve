# cook your dish here
def solution(number_of_books: int, returned_days: list[int]) -> int:
    count_late: int = 0
    seen_books = set()

    for i in range(number_of_books):

        curr_book = returned_days[i]
        highest_penalty = i + 1
        
        if curr_book in seen_books:
            continue
        seen_books.add(curr_book)

        for j in range(i + 1, number_of_books):
            if returned_days[j] == curr_book:
                curr_book = returned_days[j]
                highest_penalty = j + 1
        count_late += highest_penalty

    return count_late

def test_cases():
    return int(input())

def main():
    for _ in range(test_cases()):
        books = int(input())
        days = [int(i) for i in input().split()]
        
        answer = solution(books, days)
        print(answer)

if __name__ == "__main__":
    main()
