def is_safe(report: list[int]) -> bool:
    
    report_length = len(report)
    for i in range(1, report_length):
        
        difference = report[i] - report[i - 1]
        if not(-3 <= difference <= 3) and (difference != 0):
            return False
        
    return True

def is_safe_with_dampener(report: list[int]) -> bool:
    if is_safe(report):
        return True
    
    # else: brute force approach -> iterate over each sub-array of the report
    report_length = len(report)

    for i in range(report_length):
        potential_report = report[:i] + report[i + 1:]

        if is_safe(potential_report):
            return True
    
    return False

if __name__ == "__main__":
    with open("puzzle_input_day_two.txt") as file:
        for line in file:
            report = list(map(int, line.split())) # str -> int

            safe_reports = 0
            if is_safe_with_dampener(report):
                safe_reports += 1
    
    print(safe_reports)