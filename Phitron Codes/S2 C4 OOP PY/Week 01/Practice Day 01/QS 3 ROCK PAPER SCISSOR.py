# QS 3 Rock Paper Scissor 
# 021022, Sunday, 11.15 am


space = ('\n')
print(space)

""" 
In the famous Rock Paper Scissor game - Rock wins against scissors, paper wins
against rock, and scissors wins against paper.
Write a python program that takes two user inputs and returns who wins the game.
Sample Input:
> Player 1: rock
> Player 2: paper
Sample Output:
> Player 2 is the winner
"""


input1 = input("Player 1: Give your input:: ")
input2 = input("Player 2: Give your input:: ")

if input1 == 'Rock' and input2 == 'Scissors' :
        print("Player 2 is winner.")
elif input1 == 'Scissors' and input2 == 'Rock':
        print('Player 1 is winner.')
elif input1 == 'Paper' and input2 == 'Rock' :
        print("Player 1 is winner")
elif input1 == 'Rock' and input2 == 'Paper' :
        print('Player 2 is winner')
elif input1 == 'Scissors' and input2 == 'Paper' :
        print('Player 1 is winner')
elif input1 == 'Paper' and input2 == 'Scissors' :
        print('Player 2 is winner')
else :
        print("Input correct value.")







print(space)