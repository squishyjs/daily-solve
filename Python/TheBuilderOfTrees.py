import unittest
import enum
# from preloaded import Person
from typing import Optional, List, Dict, dataclass_transform

class Branch(enum.Enum):
    ELBOW = "└──"
    PIPE = " │ "
    TEE = "├──"
    BLANK = "   "

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
# ───────────────────────────────────────────

def interpret(description: list[str]) -> Optional[Person]:
    family_tree: Optional[Person] = None

    # TODO: build tree
    for expression in description:
        pass


    return family_tree


class TestInput(unittest.TestCase):
    # a more complex family, with 4 generations
    def test_complex_family_tree(self):
        input = [
            "pollux is the father of achille",
            "athena is the mother of lux",
            "achille is the father of athena",
            "lux is the son of athena",
            "pollux is the father of indra",
            "indra is the father of izanami and ikugui",
            "laozi has 2 sisters, izanami and ikugui",
            "laozi is the son of indra"
        ]

        tree_result = interpret(input)
        self.assertIsNotNone(tree_result)
        self.assertIsInstance(tree_result, Person)


if __name__ == "__main__":
    unittest.main()
