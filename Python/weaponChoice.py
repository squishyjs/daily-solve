# cook your dish here
import math

def solve(health: int, gun: int, laser_init: int, laser_lower: int, threshold: int) -> int:
    gun_damage = math.ceil(health / gun)
    
    if (health - (laser_init * threshold)) <= 0:
        laser_damage = math.ceil(health / laser_init)
    else:
        m = (health - (laser_init * threshold))
        laser_damage = (threshold + math.ceil(m / laser_lower))

    return min(gun_damage, laser_damage)

def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        
        h, x, y1, y2, k = map(int, input().split())
        solution = solve(h, x, y1, y2, k)
        print(solution)

if __name__ == "__main__":
    main()
