import unittest

# cook your dish here
def find_gift(number_of_moves: int, moves: str) -> tuple:
    length = number_of_moves
    x, y = 0, 0 # initial position (origin)

    for i in range(length):
        if i > 0:
            pos = i
        else:
            pos = 0
        current_move = moves[pos]
        previous_move = moves[pos - 1]
        if current_move == "L":
            # if previous_move == "L":
            #     continue
            x -= 1
        if current_move == "R":
            # if previous_move == "R":
            #     continue
            x += 1
        if current_move == "U":
            # if previous_move == "U":
            #     continue
            y += 1
        if current_move == "D":
            # if previous_move == "D":
            #     continue
            y -= 1
    return (x, y)


# Answer
# cook your dish here
def final_solution():
    for i in range(int(input())):
        n=int(input())
        s=input()
        
        x,y=0,0
        
        xaxis=False
        yaxis=False
        
        for i in range(n):
            if s[i] == 'L' and xaxis==False:
                x-=1
                xaxis=True
                yaxis=False
                            
            elif s[i] == 'R' and xaxis==False:
                x+=1
                xaxis=True
                yaxis=False
                
            elif s[i] == 'U' and yaxis==False:
                y+=1
                yaxis=True
                xaxis=False
                
            elif s[i] == 'D' and yaxis==False:
                y-=1
                yaxis=True
                xaxis=False
                
        print(x,y)

def test_find_gift():
    # test case 1
    result = find_gift(5, "URDLU")
    expected = (0, 1)
    assert result == expected, f"Test case 1 failed: exptected {expected}, got {result}"

    # test case 2
    result = find_gift(6, "UUUDDD")
    expected (0, 0)
    assert result == expected, f"Test case 2 failed: expected {expected}, got {result}"

    # test case 3
    result = find_gift(3, "LLL")
    expected = (-3, 0)
    assert result == expected, f"Test case 3 failed: expected {expected}, got {result}"

class TestFindGift(unittest.TestCase):
    def test_case_1(self):
        result = find_gift(5, "URDLU")
        expected = (0, 1)
        self.assertEqual(result, expected)

    def test_case_2(self):
        result = find_gift(6, "UUUDDD")
        expected = (0, 0)
        self.assertEqual(result, expected)
    
    def test_case_2(self):
        result = find_gift(3, "RRR")
        expected = (3, 0)
        self.assertEqual(result, expected)


def main():
    cases = int(input("Enter number of test cases: "))
    for _ in range(cases):
        n = int(input("Enter number of moves: "))
        moves = input("Enter move sequence: ").strip()
        result = find_gift(n, moves)
        print(result)

if __name__ == "__main__":
    # main()
    # final_solution()
    unittest.main()