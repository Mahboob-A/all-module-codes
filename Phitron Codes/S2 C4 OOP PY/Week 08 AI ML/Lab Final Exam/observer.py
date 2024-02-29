""" Observer Design Pattern """

"""  
Week 08: ML 
Lab final exam
261122, Saturday, 10.00 pm 
question 10: 

Make a observer design pattern 
"""



from abc import ABC, abstractmethod

# abc method to be implemented in Observer class 
class SubscriberNotify(ABC):

        @abstractmethod
        def notify(self, msg):
                # print("New Message: ", msg)
                ... 


# Publisher class 
class YouTube:
        observer_list = []

        def __init__(self) -> None:
                ... 

        # add observer method 
        def add_observer(self, observer_obj):
                self.observer_list.append(observer_obj)
        
        # remove observer method
        def remove_observer(self, observer_obj):
                self.observer_list.remove(observer_obj)
        
        # method to notify observer
        def notify(self, msg):
                for observer in self.observer_list:
                        observer.notify(msg)


# Subscriber calss 
class Observer(SubscriberNotify):
        def __init__(self, name):
                self.name = name 

        # abc method 
        def notify(self, msg):
                # return super().notify(msg)
                print(f"{self.name} has new message: {msg}")
        

# creating observers or subscribers 
ob1 = Observer('Ob1')
ob2 = Observer('Ob2')
ob3 = Observer('Ob3')

# creating subject or publishers 
YTChannel = YouTube()

# adding observers to subject 
YTChannel.add_observer(ob1)
YTChannel.add_observer(ob2)
YTChannel.add_observer(ob3)

# notifying the changes / new update from the publisher to all the subscribers 
YTChannel.notify('Hi! I am Doraemon : New Episode!')

# removing a subscriber from the publisher 
YTChannel.remove_observer(ob1)

# again notifying the rest subscribers 
YTChannel.notify('Doraemon! I need anywhere door! : Nobita Wants Anywhere Door! Funny Episode!')