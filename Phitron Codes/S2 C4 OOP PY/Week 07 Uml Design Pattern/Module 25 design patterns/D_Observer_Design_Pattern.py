"""  
Week 07, mod date: 131122, Sunday | Watch date: 151122, Monday, 04.00 pm 
Module 25 | Mod day 02  
Design Pattern 
D_Observer_Design_Pattern 
"""

class GroupChat:
        observers = []
        
        def __init__(self) -> None:
                pass
        
        
        def get_observers(self):
                return self.observers

        def add_observer(self, observer_obj):
                self.observers.append(observer_obj)
        
        def add_new_msg(self, msg):
                self.notify(msg)

        def notify(self, msg):
                for observer in self.observers:
                        observer.update_msg(msg)

        def send_inbox(self, msg, receiver, sender):
                if receiver in self.observers:
                        print(f"{receiver.name} You Have New Message From {sender.name}: {msg}")
                else:
                        print(f"{receiver} is not in group chat")


class Observers(GroupChat):
        def __init__(self, name) -> None:
                super().__init__()
                self.name = name

        def update_msg(self, msg):
                print(f"{self.name} You Have New Message: {msg}")
        
        #if we try to inherit groupchat and here get the list of observers, and crosscheck if it is in the group chat 
        # that if the receicver is in the list ,, then it given attribute error 
        def send_msg(self, msg, receiver):   
                # print(self.observers)
                # for observer in self.get_observers():
                if receiver in self.get_observers():
                # if receiver in self.observers:
                # x = self.get_observers()
                # print(x)
                # if receiver in x:
                        # if observer == receiver:
                # if receiver in messenger.observers:
                        print(f"{receiver.name} You Have New Message From {self.name}: {msg}")
                
        def send_msg2(self, msg, receiver, groupchat):
                groupchat.send_inbox(msg, receiver, self)
                        



messenger = GroupChat()

kemal = Observers('Kemal')
jamal = Observers('Jamal')

messenger.add_observer(kemal)
messenger.add_observer(jamal)

messenger.add_new_msg("Good morning")

# kemal.send_msg('hello jamal', jamal)
kemal.send_msg('Hello jamal', jamal)
# print(messenger.observers)


