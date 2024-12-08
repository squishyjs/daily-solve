def main() -> None:
    total_safe = 0  # Counter for safe reports
    
    # Read file and process each line
    with open("puzzle_input_day_two.txt") as file:
        for line in file:
            values = list(map(int, line.split()))  # Convert to integers
            
            # Ensure there's at least 2 values to compare
            if len(values) < 2:
                continue  # Skip lines with fewer than 2 values
            
            # Check if the sequence is either strictly increasing or strictly decreasing
            is_increasing = True
            is_decreasing = True

            # Check adjacent values and their differences
            for i in range(len(values) - 1):
                difference = abs(values[i + 1] - values[i])
                
                if difference < 1 or difference > 3:
                    is_increasing = is_decreasing = False
                    break
                
                if values[i + 1] < values[i]:
                    is_increasing = False
                if values[i + 1] > values[i]:
                    is_decreasing = False

            # If the sequence is either increasing or decreasing, it's a safe report
            if is_increasing or is_decreasing:
                total_safe += 1

    print(f"Total safe reports: {total_safe}")

if __name__ == "__main__":
    main()
