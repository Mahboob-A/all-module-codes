# """
# Singly Linked List in Python 
# conceptual date: 121022, Wednesday
# watch date: 131022, Thursday
#
# """

# node class 
from ast import IsNot
from hashlib import new
from traceback import print_tb


class Node: 
        def __init__(self, v):  #constructure to create two member of node class object 
                self.val = v 
                self.next = None 


# LL class 
class LinkedList:
        def __init__(self):  # constructure to construct head when LL object is created 
                self.head = None


        def insert_at_head(self, val):
                newNode = Node(val)
                if self.head == None:
                        self.head = newNode
                else: 
                        newNode.next = self.head
                        self.head = newNode

        def insert_at_tail(self, val):
                newNode = Node(val)
                if self.head == None:
                        self.head = newNode
                else: 
                        tmp = self.head 
                        while tmp.next != None: 
                                tmp = tmp.next
                        
                        tmp.next = newNode

        def insert_at_pos(self, pos, val):
                newNode = Node(val)
                if pos == 0:
                        if self.head == None:
                                self.head = newNode
                        else:
                                newNode.next = self.head
                                self.head = newNode
                else:
                        tmp = self.head 
                        i = 0 
                        while i < pos - 2: 
                                tmp = tmp.next 
                                if tmp == None:
                                        print("Insert: Position out of bound")
                                        return
                                i += 1 

                        newNode.next = tmp.next
                        tmp.next = newNode 

        def delete_at_head(self):
                if self.head == None: 
                        print("No node in list")
                        return
                else:
                        delNode = self.head 
                        self.head = delNode.next
                        del delNode

        def delete_at_tail(self):
                if self.head == None: 
                        print("No node in list")
                        return
                elif self.head.next == None:
                        self.delete_at_head()
                        return
                    
                else:
                        tmp = self.head 
                        while tmp.next.next != None: 
                                tmp = tmp.next

                        saveTail = tmp.next
                        tmp.next = None
                        del saveTail

        def delete_at_pos(self, pos):
                if self.head == None: 
                        print("No node in list")
                        return
                else:
                        tmp = self.head
                        for i in range(pos-1):
                                tmp = tmp.next
                                if tmp == None:
                                        print("Delete: Position out of bound")
                                        return
                        
                        delNode = tmp.next
                        if tmp == None:
                                print("Delete: Position out of bound")
                                return

                        if delNode is not None:  #it is convention that when we are checking if something is not None, then we check it with keyword " is not "
                                tmp.next = delNode.next
                                del delNode
                        
        
        def print_list(self):
                if self.head == None:
                        print("Print: No node in list")
                else:
                        tmp = self.head
                        while tmp != None:
                                print(tmp.val)
                                tmp = tmp.next

    


def main():

        lst = LinkedList()

        

        # i = 5
        # while i > 0:
        #         a = int(input("input: "))
        #         lst.insert_at_tail(a)
        #         i -= 1 

        lst.insert_at_tail(10)
        lst.insert_at_tail(20)
        lst.insert_at_tail(30)
        lst.insert_at_tail(40)
        lst.insert_at_tail(50)

        # lst.delete_at_tail()
        # lst.delete_at_tail()
        # lst.delete_at_tail()
        # lst.delete_at_tail()
        # lst.delete_at_tail()
        # lst.delete_at_tail()

        lst.print_list()
        print("\n\n")
        lst.delete_at_pos(5)

        # lst.insert_at_head(10)  
        # lst.insert_at_tail(100)

        lst.print_list()


# pos = 10
# for i in range (pos+1):
#         print(i)



main()

                

