# cook your dish here

def solve(integer_a: int, integer_b: int) -> str:

    if integer_a == integer_b:
        return "YES"
    if integer_a > integer_b:
        while (integer_a > 0):
            if integer_a == integer_b:
                return "YES"
            integer_a = integer_a // 2
            if integer_a < integer_b:
                return "NO"
    if integer_b > integer_a:
        while (integer_b > 0):
            if integer_b == integer_a:
                return "YES"
            integer_b = integer_b // 2
            if integer_b < integer_a:
                return "NO"

def second_solution() -> None:
    # cook your dish here
    for _ in range(int(input())):
        a, b = map(int, input().split(" "))
        if a == b:
            print("Yes")
        else:
            # check if the number can be achieved or not 
            mini = min(a,b)
            maxi = max(a,b)
            
            while(mini<maxi):
                mini *= 2
                
            if mini == maxi:
                print("Yes")
            else:
                print("No")

def main() -> None:
    for _ in range(int(input())):
        a, b = map(int, input().split())

        solution = solve(a, b)
        print(solution)

if __name__ == "__main__":
    main()
