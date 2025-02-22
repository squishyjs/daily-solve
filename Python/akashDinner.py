from typing import Dict


def solve(n_items: int, k_distinct: int, dish_categories: list[int], cook_time: list[int]) -> int:
    
    # edge case
    if (len(set(dish_categories)) < k_distinct):
        return -1
    
    count: int = 0
    menu_choice = dict()
    for dish, cooking in zip(dish_categories, cook_time):
        menu_choice.setdefault(dish, float('inf'))
        menu_choice[dish] = min(menu_choice[dish], cooking)

    choice_list = [(x, y) for x, y in menu_choice.items()]
    choice_list.sort(key=lambda x: x[1])

    result = 0
    for i in range(k_distinct):
        result += choice_list[i][1]

    return result


def main() -> None:

    test_cases = int(input())
    for _ in range(test_cases):
        n, k = map(int, input().split())
        dishes = [int(i) for i in input().split()]
        cook_time = [int(i) for i in input().split()]
        
        solution = solve(n, k, dishes, cook_time)
        print(solution)

    return

if __name__ == "__main__":
    main()
