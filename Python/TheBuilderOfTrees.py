from types import new_class
import unittest
import enum
from typing import Optional, List, Dict, Tuple, dataclass_transform

class Branch(enum.Enum):
    ELBOW = "└──"
    PIPE = " │ "
    TEE = "├──"
    BLANK = "   "


RELATIONS = {
    "father", "mother", "brother", "sister", "son", "daughter",
    "sons", "daughters", "brohters", "sisters"
}

EXPRESSIONS = { "is", "has" }

ARTICLES = { "the", "a", "of" }


ROLE_SEX = {
    "father": "m",
    "mother": "f",
    "brother": "m",
    "sister": "f",
    "son": "m",
    "daughter": "f",
    "sons": "m",
    "daughters": "f",
    "brothers": "m",
    "sisters": "f"
}

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

    def __repr__(self) -> str:
        return f"Person(name={self.name!r}, sex={self.sex!r})"

    def __eq__(self, other):
        if not isinstance(other, Person):
            return False

        # inconsistent name or gender
        if self.name != other.name or self.sex != other.sex:
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

def is_relation(word: str) -> bool:
    return word in RELATIONS

def is_expression(word: str) -> bool:
    return word in EXPRESSIONS

def is_article(word: str) -> bool:
    return word in ARTICLES

def is_name(string: str) -> bool:
    for word in string:
        if (is_relation(word) or is_expression(word)):
            return False

    return True



def clean_expression(expr: str) -> str:
    expr = expr.strip()
    expr = expr.lower()
    expr = expr.replace(",", " , ")
    expr = " ".join(expr.split())

    return expr


def interpret(description: List[str]) -> Optional[Person]:
    if not description:
        return None

    family_tree_root = None
    people: Dict[str, Person] = {}
    sibling_groups: List[List[str]] = []
    parent_child_facts: List[Tuple[str, str]] = []  # list of (parent name, child name)


    # TODO: parse description and build tree
    for s in description:
        pass


    return family_tree_root


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
