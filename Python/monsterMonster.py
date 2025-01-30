# cook your dish here

def solution() -> None:
    for _ in range(int(input())):
        n, x = map(int, input().split())
        health_stats = [int(i) for i in input().split()]
        
        minimum = min(health_stats)
        print(max(max(health_stats), minimum + (len(health_stats) - 1) * x))

def second_solution() -> None:
    for _ in range(int(input())):
        n, x = map(int, input().split())
        health_stats = sorted([int(i) for i in input().split()], reverse=True)
        
        max_attack: int = health_stats[0]
        # iterate
        for i in range(1, n):
            if health_stats[i] + (i * x) > max_attack:
                max_attack = health_stats[i] + (i * x)
        
        print(max_attack)
        


if __name__ == "__main__":
    second_solution()
