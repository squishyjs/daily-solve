
def selling_donuts_solution(donuts: list[int], customers: list[int]) -> int:
    sad_customers: int = 0

    for customer in customers:
        donut_type = customer - 1 # 0-based index
        if donuts[donut_type] > 0:
            donuts[donut_type] -= 1
            continue
        sad_customers += 1  # customer is sad otherwise

    return sad_customers


def main() -> None:
    cases = int(input())
    for _ in range(cases):
        donut_types, customers = map(int, input().split())
        donuts = [int(i) for i in input().split()]
        customer_list = [int(i) for i in input().split()]
        
        result = selling_donuts_solution(donuts, customer_list)
        print(result)

    
if __name__ == "__main__":
    main()
