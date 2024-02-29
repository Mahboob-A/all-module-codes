# job group 1st task 
# task manager 
# project done Alhumdulliah 080123 02.00 am 

"""
Task class will have 6 fields.

task: The name of task (string)
created_time: The date and time when task was created (datetime)
updated_time: The date and time when task was updated (datetime)
completed_time: The date and time when task was completed (datetime)
task_done: Define if the task is completed (boolean)
id: Unique id to define the task (uuid)

Task class will have two methods:

update_task(): 
It will take the task object and new task name and update the task name and add updated_time.

complete_task(): 
It will take the task object and mark the task as completed and add completed_time.

"""

import datetime as dt 
import random
class TaskManager:
        all_task = []
        incomplete_task = []
        completed_task = []

        def __init__(self, task_name):
                self.task_name = task_name
                self.created_time = dt.datetime.now().strftime("%b %d %Y, %H:%M:%S%p")
                self.updated_time = None 
                self.completed_time = None 
                self.task_done = False
                self.task_id = self.tmid()
                self.all_task.append(vars(self))
                self.incomplete_task.append(vars(self))
                print("Task Created Successfully!\n")
        
        # this method just creats a random id 
        def tmid(self):
                demo_id_stuff = ['AA', 'AAA', 'BB', 'BBB', 'CC', 'CCC', 'DD', 'DDD', 'AB', 'AC', 'AD', 'BA', 'BC', 'BD', 
                'CA', 'CB', 'CD', 'DA', 'DB', 'DC', 'DD', 'ABA', 'ACAA', 'BAB', 'BCBB', 'CAC', 'CBCC', 'DAD', 'DBDD']
                string = 'justrandomstring'
                x = random.choice(demo_id_stuff)
                y = random.randint(1245, 235312)
                z = random.sample(string, len(string))
                zz = random.choices(z, k=random.randint(2, 4))
                return x+str(y)+"".join(zz)
        
        # method to print all the tasks 
        def show_all_task(self):
                print("\tALL TASKS\t\n")
                for task in self.all_task:
                        a = "NA"
                        b = "NA"
                        print(f"Task ID - {task['task_id']}\nTask name - {task['task_name']}\nCreated time - {task['created_time']}")
                        print(f"Updated time - {b if task['updated_time'] == None else task['updated_time']}\nIs task completed? - {task['task_done']}\nCompleted time -  {a if task['completed_time'] == None else task['completed_time'] }\n")

        # just a general method to print all the incomplete task with task counter 
        def incomplete_task_gen_print(self):     
                for count, task in enumerate(self.incomplete_task):
                        print(f"Task No - {count+1}")
                        a = "NA"
                        b = "NA"
                        print(f"Task ID - {task['task_id']}\nTask name - {task['task_name']}\nCreated time - {task['created_time']}")
                        print(f"Updated time - {b if task['updated_time'] == None else task['updated_time']}\nIs task completed? - {task['task_done']}\nCompleted time -  {a if task['completed_time'] == None else task['completed_time'] }\n")


        # method to print all the incomplete task 
        def show_incomplete_task(self):
                print("\tINCOMPLETE TASKS\t\n")
                if len(self.incomplete_task) == 0:
                        print("\nNo Incomplete Task!\n")
                else:
                        for count, task in enumerate(self.incomplete_task):
                                a = "NA"
                                b = "NA"
                                print(f"Task ID - {task['task_id']}\nTask name - {task['task_name']}\nCreated time - {task['created_time']}")
                                print(f"Updated time - {b if task['updated_time'] == None else task['updated_time']}\nIs task completed? - {task['task_done']}\nCompleted time -  {a if task['completed_time'] == None else task['completed_time'] }\n")

        
        # method to print all the completed task 
        def show_completed_task(self):
                print("\tCOMPLETED TASKS\t\n")

                if len(self.completed_task) == 0:
                        print("\nNo Completed Task!\n")
                else: 
                        for count, task in enumerate(self.completed_task):
                                a = "NA"
                                b = "NA"
                                print(f"Task ID - {task['task_id']}\nTask name - {task['task_name']}\nCreated time - {task['created_time']}")
                                print(f"Updated time - {b if task['updated_time'] == None else task['updated_time']}\nIs task completed? - {task['task_done']}\nCompleted time -  {a if task['completed_time'] == None else task['completed_time'] }\n")

        # method to update a task with real time update 
        def update_task(self):
                print("\tUPDATE TASK\t\n")
                
                if len(self.incomplete_task) == 0: 
                        print("\nNo Task To Update!\n")
                else:
                        print("\nSelect which task to update\n")
                        self.incomplete_task_gen_print()
                        task_no_to_update = int(input("Enter task number:  "))
                        if task_no_to_update > len(self.incomplete_task): 
                                print("You do not have any task with {} number in your incomplete tasks.".format(task_no_to_update))
                        else:
                                new_task_name = input("Enter new task name:  ")
                                for task_no, task in enumerate(self.incomplete_task):
                                        if task_no == task_no_to_update - 1: 
                                                task['task_name'] = new_task_name
                                                task['updated_time'] = dt.datetime.now().strftime("%b %d %Y, %H:%M:%S%p")
                                                print(f"\nTask no {task_no_to_update} is updated successfully!\n")

        # method to mark a task as completed 
        def mark_a_task_as_completed(self):
                print("\tMake Task As Compelte\t\n")                 
                
                if len(self.incomplete_task) == 0: 
                        print("\nNo Task To Complete!\n")
                else:
                        print("\nSelect Which Task To Complete\n")
                        self.incomplete_task_gen_print()
                        if len(self.incomplete_task) != 0: 
                                task_no_to_complete = int(input("Enter task number:  "))
                                if task_no_to_complete > len(self.incomplete_task): 
                                        print("You do not have any task with {} number in your incomplete tasks.".format(task_no_to_complete))
                                else: 
                                        for task_no, task in enumerate(self.incomplete_task):
                                                if task_no == task_no_to_complete - 1: 
                                                        task['task_done'] = True 
                                                        task['completed_time'] = dt.datetime.now().strftime("%b %d %Y, %H:%M:%S%p")
                                                        self.completed_task.append(task)  # appending the dict into completed task list 
                                                        del self.incomplete_task[task_no]   # deleting the dict from the incomplete task list 
                                                        print(f"\nTask no {task_no_to_complete} is completed successfully!\n")


if __name__ == "__main__":
        while True: 
                print("1. Add New Task\n2. Show All Task\n3. Show Incomplete Task\n4. Show Completed Task\n5. Update Task\n6. Mark A Task As Compelted\n7. 0 to exit")
                inp = int(input("Enter option:  "))
                print()
                if inp == 0: 
                        print()
                        print("Task Manager is Stopped!")
                        break
                elif inp == 1: 
                        print()
                        task_name = input("Input task name:  ")
                        tm = TaskManager(task_name)   
                elif inp == 2: 
                        print()
                        tm.show_all_task()  
                elif inp == 3: 
                        print()
                        tm.show_incomplete_task()  
                elif inp == 4: 
                        print()
                        tm.show_completed_task()   
                elif inp == 5: 
                        print()
                        tm.update_task()    
                elif inp == 6: 
                        print()
                        tm.mark_a_task_as_completed()   
                else: 
                        print()
                        print("{} is an invalid input. Please input again\n".format(inp))
                







'''


# understanding class variable and instance variable in python 
# 211223, Thursday, 10.00 am 

class Task: 
    task_domain = 'Hi Task in class variable'
    
    def __init__(self, name): 
        self.name = name 
    
    def show_name(self): 
        print('Task Name: ', self.name)
        
    def show_task_domain(self): 
        print('Task Domain of "{}" is -  {}'.format(self.name, self.task_domain))

    @classmethod
    def show_cls_value(cls): 
        print('Class variable task_domain value is : ', cls.task_domain)
    
    
    
t1 = Task('new task')
t2 = Task('new task 2')
t1.show_name()

print('\nFirst print of class variable with instance:\n')
print(t1.task_domain)  # access the class variable 
t1.show_task_domain() # access the class variable
print(t2.task_domain)  # access the class variable

print('\nValue assignment to class variable with instance:\n')
t1.task_domain = 'Better Task | creates a new instance variable'  # now, t1 creates an instance variable with task_domain. it does not connect to the class variable now 
print(t1.task_domain)  # access's the instance variable 
t1.show_task_domain() # access's the instance variable  
print(t2.task_domain)   # t2 access the class variable 
t2.show_task_domain()   # t2 access the class variable 

print('\nClass variable value change by class: \n')

Task.task_domain = 'Hello Task new value of class variable'   # class variables / static variable value changed by class. 
print(t1.task_domain)   # t1 access its own task_domain instance variable 
print(t2.task_domain)    # t2 acess the new class variable value 
print()
t1.show_task_domain()  # t1 access its own task_domain instance variable 
t2.show_task_domain()  # t2 acess the new class variable value 

print('\nPrinting the class variable with class method \n')

t1.show_cls_value()
t2.show_cls_value()

print('\nPrinting the instance variables of t1 instance \n')

print(vars(t1))

print('\nPrinting the instance variables of t2 instance \n')
print(t2.__dict__)









'''