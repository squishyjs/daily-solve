from enum import Enum
import pprint
from typing import TypedDict, NotRequired      # use for building the actual tree
from typing import List


class Person():
    def name(self, name: str):
        return name

    def parent(self, parent=None):
        return parent

    def children(self, offspring: list[str]):
        if offspring:
            for child in offspring:
                print(child)

        return False

    def sex(self, gender: str):
        return gender

class TreeSigns(Enum):
    ROOT = "└──"
    DESC = "│"
    REL = "├──"

class Gender(Enum):
    MALE = "m"
    FEMALE = "f"

class Relation(Enum):
    IS = True
    HAS = False

def main() -> None:
    print("Hello, World!")

    pprint.pprint({ "name": "John Sciuto", "age": 30})

if __name__ == "__main__":
    main()
