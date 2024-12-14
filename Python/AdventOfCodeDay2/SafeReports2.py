def solution_two() -> None:
    # load the input puzzle
    safe_reports: int = 0

    with open("puzzle_input_day_two.txt") as file:
        for line in file:
            reports = list(map(int, line.split())) # str -> int

            if len(reports) < 2: # not enough to iterate
                continue
            
            direction_change = 0
            STATE = ""
            if reports[0] < reports[1]:
                STATE = "increasing"
            elif reports[0] > reports[1]:
                STATE = "decreasing"
            elif reports[0] == reports[1]: # must be all increasing or decreasing
                continue
            direction_change += 1


            # variables 
            TOO_LARGE_DISTANCE: bool = False
            report_length: int = len(reports)


            for i in range(1, report_length - 1):
                difference = abs(reports[i + 1] - reports[i])

                if (difference < 1) or (difference > 3):
                    TOO_LARGE_DISTANCE = True
                    break
                
                current_report = reports[i]
                next_report = reports[i + 1]

                if (STATE == "decreasing") and (current_report < next_report):
                    direction_change += 1
                    STATE = "increasing" # invert direction
                elif (STATE == "increasing") and (current_report > next_report):
                    direction_change += 1
                    STATE = "decreasing" # invert direction
            

            if (not TOO_LARGE_DISTANCE) and (direction_change < 3):
                safe_reports += 1

    print(safe_reports)


if __name__ == "__main__":
    solution_two()
