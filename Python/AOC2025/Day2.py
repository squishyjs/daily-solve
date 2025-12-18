from typing import List
from pathlib import Path
import argparse

parser = argparse.ArgumentParser(description="Solve Day 1 Puzzle 1")
parser.add_argument("input_file", type=Path, help="Path to input file")

args = parser.parse_args()


def solve(array: List[int]) -> int:
    sum_invalid = 0
    for range in array:



if __name__ == "__main__":

    array = []
    with args.input_file.open() as ids:
        for id in ids:
            array = id.split(',')


    print(solve(array))
