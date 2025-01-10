# cook your dish here

def solve(number: int, students: list[int]) -> list[int]:
    students_emotion: list[int] = []
    
    max_happy: int = 0
    for student in students:
        if student > max_happy:
            students_emotion.append(1)
            max_happy = student
        else:
            students_emotion.append(0)
    
    return students_emotion   

def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        number_of_students = int(input())
        students = [int(i) for i in input().split()]
        
        solution = solve(number_of_students, students)
        print(*solution)

if __name__ == "__main__":
    main()
