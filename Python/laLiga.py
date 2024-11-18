'''SOLVED'''
def laLigaSolution():
    # Real Madrid wins
    # except: 
    # if Real Madrid loses against Malaga && Barcelona wins against Eibar, La Liga = Barcelona
    # else: La Liga = Real Madrid
    scores = {}
    for _ in range(4):
        team, score = input().split()
        scores[team] = int(score)

    B, M, R, E = 0, 0, 0, 0
    for team in scores:
        if team == "Barcelona":
            B += scores[team]
        elif team == "Malaga":
            M += scores[team]
        elif team == "RealMadrid":
            R += scores[team]
        elif team == "Eibar":
            E += scores[team]

    if (R < M) and (B > E):
        return "Barcelona"
    return "RealMadrid" 


if __name__ == "__main__":
    cases = int(input())
    for _ in range(cases):
        # some code that accepts input
        print(laLigaSolution())