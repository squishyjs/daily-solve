from typing import List
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description="Solve Day 1 Puzzle 1")
parser.add_argument("input_file", type=Path, help="Path to input file")

args = parser.parse_args()

LEFT  = "L"
RIGHT = "R"

# FIXME:
def rotates_through_zero(direction: str, start: int, steps: int) -> int:
    crossings = steps // 100
    remainder = steps % 100

    if remainder == 0:
        return crossings

    if direction == RIGHT:
        # land on 0 within the partial segment if we pass index 99 -> 0
        if start + remainder >= 100:
            crossings += 1

    elif direction == LEFT:
        # if start==0, you only land on 0 after a full 100-step loop (already counted)
        if start != 0 and remainder >= start:
            crossings += 1

    return crossings

def is_zero(n: int) -> bool:
    return n == 0

def wrap_0_99(n: int) -> int:
    return n % 100

def solve() -> int:
    # count = 0
    start, password = 50, 0
    with args.input_file.open() as combinations:
        for combination in combinations:
            number = int(combination[1:])
            direction = combination[0]

            password += rotates_through_zero(direction, start, number)

            if combination[0] == "L":
                start = wrap_0_99(start - int(combination[1:]))
                continue

            elif combination[0] == "R":
                start = wrap_0_99(start + int(combination[1:]))

    return password

def main() -> None:
    print(solve())

if __name__ == "__main__":
    main()
