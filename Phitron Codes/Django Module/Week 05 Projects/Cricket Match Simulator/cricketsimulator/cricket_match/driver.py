
import random
from .classes import *

def run():
    cup = T2Cup()
    bangladesh = Team("Bangladesh")
    india = Team("India")
    pakistan = Team('Pakistan')

    tamim = Player("Tamim Iqbal", bangladesh)
    shakib = Player("Shakib Al Hasan", bangladesh)
    mustafiz = Player("Mustafizur Rahman", bangladesh)

    kohli = Player("Virat Kohli", india)
    rohit = Player("Rohit Sharma", india)
    bumra = Player("Bumra", india)

    babor = Player('Babor Azam', pakistan)
    afridi = Player('Shahid Afridi', pakistan)
    wasim = Player('Wasim Akram', pakistan)

    while True:
        print()
        print("Select teams to be played")
        for i, val in enumerate(cup.allTeams):
            print(f"{i + 1}. {val.teamName}")
        print('Enter two team numbers: ')
        try : 
                teamOneIndex, teamTwoIndex = map(int, input("Enter:  ").split(" "))
        except Exception as e : 
                print()
                print('Do not press space after second country code')
                continue 
        teamOneIndex -= 1
        teamTwoIndex -= 1
        teamOneObj = cup.allTeams[teamOneIndex]
        teamTwoObj = cup.allTeams[teamTwoIndex]
        tossWin = random.choice([teamOneIndex, teamTwoIndex])
        print(f"{cup.allTeams[tossWin].teamName} won the toss")
        if tossWin == teamOneIndex:
            tossLose = teamTwoIndex
        else:
            tossLose = teamOneIndex
        rand = random.choice([0, 1])
        print()
        if rand == 0:
            ## Winner Team Choose Bowling
            print(f"{cup.allTeams[tossWin].teamName} chooses to ball")
            battingTeamObj = cup.allTeams[tossLose]
            bowlingTeamObj = cup.allTeams[tossWin]
        else:
            ## Winner Team Choose Batting
            print(f"{cup.allTeams[tossWin].teamName} chooses to bat")
            battingTeamObj = cup.allTeams[tossWin]
            bowlingTeamObj = cup.allTeams[tossLose]
        firstInnings = Innings(teamOneObj, teamTwoObj, battingTeamObj, bowlingTeamObj)
        firstInnings.show_score_board()
        print()
        over = 0
        print('\n')
        while over < 2:
                off = False
                print("Choose bowler: ")
                for i, val in enumerate(bowlingTeamObj.playersListOfObject):
                        print(f"{i + 1}. {val.playerName}")
                bowlerIndex = int(input("Enter bowler: "))
                bowlerIndex -= 1
                bowlerObj = bowlingTeamObj.playersListOfObject[bowlerIndex]
                firstInnings.set_bowler(bowlerObj)
                print("\n")

                while True:
                        okStatus = True 
                        status = input("Enter bowl status: ")
                        if len(status)== 1: 
                                try: 
                                        run = int(status[0])
                                        if run > 6:
                                                print('Run must be within 6')
                                                print()
                                                continue
                                except Exception as e : 
                                        okStatus = False
                                        print('Run must be a single character')
                                        print()
                                        continue
                        elif len(status) == 2 and not status[1] == ' ' : # Wrun or Nrun 
                                run = int(status[1])
                                if run > 6:
                                        print('Run must be within 6')
                                        print()
                                        continue
                        else : 
                                okStatus = False
                                print('Your command is incorrect. Please do not add space in between or after the Run, Nrun or Wrun')
                                print('Put : Nrun or Wrun for No Ball or Wide Ball and additonal run if any. If no additonal run, put 0')
                                print()
                                continue 
                        
                        if okStatus: 
                                rcv = firstInnings.bowl(status)
                                if rcv == "end":
                                        off = True
                                        break
                                firstInnings.show_score_board()
                                if (firstInnings.totalOver * 6 + firstInnings.currentBall) % 6 == 0:  # runs for 6 balls
                                        break
                over += 1
                if off == True:
                        break

        print()
        print(f"Target is {firstInnings.totalRun + 1}")
        battingTeamObj, bowlingTeamObj = bowlingTeamObj, battingTeamObj
        secondInnings = Innings(teamOneObj, teamTwoObj, battingTeamObj, bowlingTeamObj)
        secondInnings.target = firstInnings.totalRun + 1
        over = 0
        print()
        print()
        # second innings
        while over < 2:
            off = False
            print("Choose bowler: ")
            for i, val in enumerate(bowlingTeamObj.playersListOfObject):
                print(f"{i + 1}. {val.playerName}")
            bowlerIndex = int(input("Enter bowler: "))
            bowlerIndex -= 1
            bowlerObj = bowlingTeamObj.playersListOfObject[bowlerIndex]
            secondInnings.set_bowler(bowlerObj)
            print("\n")

            while True:
                okStatus = True 
                status = input("Enter bowl status: ")
                if len(status)== 1: 
                        try: 
                                run = int(status[0])
                                if run > 6:
                                        print('Run must be within 6')
                                        print()
                                        continue
                        except Exception as e : 
                                okStatus = False
                                print('Run must be a single character')
                                print()
                                continue
                elif len(status) == 2 and not status[1] == ' ' : # Wrun or Nrun 
                    run = int(status[1])
                    if run > 6:
                        print('Run must be within 6')
                        print()
                        continue
                
                else : 
                        okStatus = False
                        print('Your command is incorrect. Please do not add space in between or after the Run, Nrun or Wrun')
                        print('Put : Nrun or Wrun for No Ball or Wide Ball and additonal run if any. If no additonal run, put 0')
                        print()
                        continue
                
                if okStatus: 
                        rcv = secondInnings.bowl(status)
                        if rcv == "end":
                                off = True
                                break
                        secondInnings.show_score_board()
                        if (secondInnings.totalOver * 6 + secondInnings.currentBall) % 6 == 0:
                                break
            over += 1
            if off == True:
                break
        if secondInnings.totalRun >= secondInnings.target:
            print(f"{secondInnings.battingTeam.teamName} won the match!")
        else:
            print(f"{secondInnings.bowlingTeam.teamName} won the match!")
        break


