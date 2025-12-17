from types import new_class
import unittest
import enum
# from preloaded import Person
from typing import Optional, List, Dict, dataclass_transform

class Branch(enum.Enum):
    ELBOW = "└──"
    PIPE = " │ "
    TEE = "├──"
    BLANK = "   "



# TODO: john, add aliases for folke/todo-comments and change colour gradient for "PERF" to purple



# ────────────── Person ─────────────────────
class Person:
    def __init__(
        self,
        name: str = "",
        sex:  str = "",
        parent: Optional["Person"] = None
    ):
        self.name = name
        self.sex = sex
        self.parent = parent
        self.children: List["Person"] = []

    def __eq__(self, other):
        if not isinstance(other, Person):
            return False

        return (
            self.name == other.name
            and self.sex == other.sex
            and len(self.children) == len(other.children)
            and all(c1 == c2 for c1, c2 in zip(self.children, other.children))
        )

    def has_parent(self) -> bool:
        if self.parent:
            return True

        return False # root

    def has_children(self) -> bool:
        return len(self.children) > 0

    def num_children(self) -> int:
        return len(self.children)

    def num_daughters(self) -> int:
        return len([child for child in self.children
                if child.sex == "f"])

    def num_sons(self) -> int:
        return len([child for child in self.children
                if child.sex == "m"])

# ───────────────────────────────────────────

class Parent:       # mother or father
    def __init__(
        self,
        parent: Optional["Person"] = None,
        children: List[Person] = []
    ):
        self.parent = parent
        self.children = children

    def has_children(self) -> bool:
        return len(self.children) > 0

def is_relation(word: str) -> bool:
    relations: list[str] = [
        "father",
        "mother",
        "brother",
        "sister",
        "son",
        "daughter",
        "sons",
        "daughters",
        "brothers",
        "sisters"
    ]

    return word in relations

def is_expression(word: str) -> bool:
    expressions: List[str] = [
        "is",
        "has"
    ]

    return word in expressions

def is_article(word: str) -> bool:
    articles: List[str] = [
        "the",
        "a",
        "of"
        ","
    ]

    return word in articles

def is_name(string: str) -> bool:
    for word in string:
        if (is_relation(word) or is_expression(word)):
            return False

    return True

# NOTE:
def interpret(description: List[str]) -> Optional[Person]:
    family_tree: Optional[Person] = None

    family_names: set = set()

    for expression in description:
        for string in expression:

            if (string == " "):
                continue

            curr_name = string
            if (is_name(curr_name)):
                if curr_name not in family_names:

                    new_name = curr_name
                    family_names.add(new_name)
                    continue

            # TODO: sort new name into some sort of tree struct


    return family_tree


class TestInput(unittest.TestCase):
    # a more complex family, with 4 generations
    def test_complex_family_tree(self):
        input_1 = [
            "marie has 2 sisters, emily and julie",
            "ikugui is the daughter of indra",
            "laozi is the brother of izanami",
            "horus has a sister, bastet",
            "laozi is the son of indra",
            "isis is the mother of bastet",
            "indra is the father of laozi",
            "athena is the daughter of achille",
            "isaac is the brother of rebecca",
            "indra has a father, pollux",
            "achille has a father, pollux",
            "amon is the son of jane",
            "athena is the mother of lux",
            "pollux has a brother, john",
            "ibrahim has a mother, jane",
            "amon has a mother, jane",
            "achille is the son of pollux",
            "duamutef is the son of horus",
            "hapy is the son of horus",
            "rebecca is the daughter of john",
            "julie is the daughter of ibrahim",
            "rebecca is the sister of isaac",
            "marie is the daughter of ibrahim",
            "izanami is the daughter of indra",
            "isaac is the son of john",
            "jane is the mother of john",
            "qebehsenuef is the son of horus",
            "isis is the daughter of amon",
            "arthur has a father, ibrahim",
            "qebehsenuef has a father, horus",
            "duamutef has 2 brothers, imsety and hapy",
            "athena has a son, lux",
            "laozi is the brother of ikugui",
            "arthur is the son of ibrahim",
            "izanami has a brother, laozi"
        ]

        output_2 = [
            "└── jane f",
            "    ├── amon m",
            "    │   └── isis f",
            "    │       ├── bastet f",
            "    │       └── horus m",
            "    │           ├── duamutef m",
            "    │           ├── hapy m",
            "    │           ├── imsety m",
            "    │           └── qebehsenuef m",
            "    ├── ibrahim m",
            "    │   ├── arthur m",
            "    │   ├── emily f",
            "    │   ├── julie f",
            "    │   └── marie f",
            "    ├── john m",
            "    │   ├── isaac m",
            "    │   └── rebecca f",
            "    └── pollux m",
            "        ├── achille m",
            "        │   └── athena f",
            "        │       └── lux m",
            "        └── indra m",
            "            ├── ikugui f",
            "            ├── izanami f",
            "            └── laozi m",
        ]

        # test case 2
        input_2 = [
            "pollux is the father of achille",
            "athena is the mother of lux",
            "achille is the father of athena",
            "lux is the son of athena",
            "pollux is the father of indra",
            "indra is the father of izanami and ikugui",
            "laozi has 2 sisters, izanami and ikugui",
            "laozi is the son of indra"
        ]

        tree_result = interpret(input_1)
        self.assertIsNotNone(tree_result)
        self.assertIsInstance(tree_result, Person)

        # self.assert(tree_result, output_2)


if __name__ == "__main__":
    unittest.main()
