#Module 06, Lab Class 02
# 121022, Wednesday, 10.00 am
# 6_3 Chatbot 

# """  
# User input / listen()
# Process / decide()
# Output / talkback()
# 
# """

greet_words = ['hi', 'hello', 'hey', 'yo', 'hola']

bye_words = ['bye', 'babye', 'byebye', 'take care', 'good bye', 'see you', 'tata', 'tata bye bye', 'tata good bye']

forbidden_words = ['dog', 'cat', 'bilai', 'vag', 'chal vag', 'hat']

banned_words = ['terrorist', 'gangster', 'don', 'villain', 'dan hatt']

compliment_words = ['nice', 'ok', 'kul', 'wow', 'beautiful', 'handsome', 'intelliegnt',
                    'brilliant', 'awesome', 'onoboddo', 'osadhron', 'splendid', 'excellent']

disappointed_words = ['shit', 'oh', 'oh no', 'no', 'alas', 'uh', 'aha', 'aha re', 'sorry', 'my apology', 'apology', 'hate']

wh_words = ['what', 'when', 'how', 'where', 'which', 'why', 'who', 'do', 'are']

wh_related_words = ['name', 'naem', 'country', 'state', 'nation', 'natin', 'state', 'time', 'tiem' 'you', 'pm', 'prime minister',
                    'cm', 'chief minister', 'live', 'wake up', 'wake', 'love', 'color', 'study', 'current time', 'old', 'programming', 'good', 'bad', "father", "mother"]




def listen() :
        return input("Say something: ")

def talkback(command):
    print("Chatbot: ", command)

def decide(command) :
        command = command.lower()
        split_words = command.split(" ")
        for word in split_words : 
                if word in greet_words : 
                        talkback("Welcome! Nice to meet you!")
                        break 
                elif word in bye_words : 
                        talkback("Thank you for being here. Take Care")
                        break
                elif word in forbidden_words : 
                        talkback("I knew you are a good boy. You shouldn't talk like this")
                        break
                elif word in compliment_words : 
                        print("Chatbot: Aww! Thank you so much! You too, Mr.", word, "!")
                        break
                elif word in disappointed_words : 
                        talkback("I am sorry to hear this. I will try to fix it soon")
                        break
                elif word in banned_words : 
                        talkback("!WARNING! Behave or You'd find yourself in trouble!")
                        break
                elif word in wh_words : 
                        for sub_word in split_words : 
                                if sub_word in wh_related_words : 
                                        if word == 'what' and sub_word == 'name' : 
                                                talkback("My name is Mahboob Alam")
                                                break 
                                        elif word == 'where' and sub_word == 'live' : 
                                                talkback("I live in India")
                                                break
                                        elif word == 'what' and sub_word == 'country' : 
                                                talkback("My country name is India")
                                                break
                                        elif word == 'what' and sub_word == 'state' :
                                                talkback("My state name is West bengal")
                                                break
                                        elif word == 'how' and sub_word == 'old' :
                                                talkback("I am 23 years old")
                                                break
                                        elif (word == 'when' and sub_word == 'wake') or (word == 'when' and sub_word == 'wake up') :
                                                talkback("I wake up at 6 o'clock every day")
                                                break
                                        elif word == 'what' and sub_word == 'color' : 
                                                talkback("My favourite color is purple")
                                                break
                                        elif word == 'do' and sub_word == 'programming' : 
                                                talkback("Yes! I love programming a lot!")
                                                break
                                        elif (word == 'what' and sub_word == 'time') or (word == 'what' and sub_word == 'current time') : 
                                                talkback("Sorry! I can't tell the current time yet. I am still learning how to tell current time")
                                                break
                                        elif (word == 'who' and sub_word == 'pm') or (word == 'who' and sub_word == 'prime minister'):
                                                talkback("The Prime Minister of Inida is Mr. Narendra Damodar Das Modi")
                                                break
                                        elif (word == 'who' and sub_word == 'cm') or (word == 'who' and sub_word == 'chief minister') :
                                                talkback("The Chief Minister of West Bengal is Shrm. Mamata Banerjee")
                                                break
                                        elif word == 'how' and sub_word == 'you' : 
                                                talkback("I am doing good. How you doin these days!")
                                                break 
                                        elif word == 'what' and sub_word == 'study' :
                                                talkback("I study about computer")
                                                break
                                        elif word == 'are' and sub_word == 'good' : 
                                                talkback("Yes! I guess I am!")
                                                break
                                        elif word == 'are' and sub_word == 'bad' : 
                                                talkback("Eww! Noo! Who told you this!")
                                                break
                                        elif (word == 'who' and sub_word == "father") or (word == 'who' and sub_word == "mother"):
                                            talkback( "Phew! Tough question! I am a chatbot and I do not have biological parents like you! Well, you are lucky")
                                            break  
                                        # else : 
                                        #         talkback("I am sorry. I think I do not have much data about it.")
                                                # break 
                # else:
                #     talkback("I am sorry. I think I do not have much data about it.")
                    

run = True             
while run: 
        command = listen()
        print()
        print("You: ", command)
        decide(command)
        split_word = command.split(" ")
        for word in split_word: 
                if word in bye_words: 
                        run = False 
        print()
        


    

    
    
