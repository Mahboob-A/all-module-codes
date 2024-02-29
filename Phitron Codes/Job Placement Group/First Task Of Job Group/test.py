# job group 1st task 
# task manager 

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

        def __init__(self):
                self.task_name = None
                self.created_time = None  #dt.datetime.now()
                self.updated_time = None
                self.completed_time = None 
                self.task_done = False 
                self.task_id = None    #self.tmid()
                # self.all_task.append(vars(self))
                # self.incomplete_task.append(vars(self))
        
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
        
        def create_new_task(self, task_name):
                self.task_name = task_name
                self.created_time = dt.datetime.now().strftime("%b %d %Y, %H:%M:%S%p")
                self.updated_time = None 
                self.completed_time = None 
                self.task_done = False
                self.task_id = self.tmid()
                self.all_task.append(vars(self))
                self.incomplete_task.append(vars(self))

        def update_task(self):
                for count, task in enumerate(self.all_task):
                        print(f"Task No: {count+1}")

                        comp_time = None 
                        if task['completed_time'] == None: 
                                comp_time = "NA"
                        else: 
                                comp_time =  task['completed_time']
                        
                        upd_time = None 
                        if task['updated_time'] == None:
                                upd_time = "NA"
                        else: 
                                upd_time = task['updated_time']
                        # beautiful_date_time = task['created_time'].strftime("%b %d %Y, %H:%M:%S%p")
                        
                        print(f"Task ID - {task['task_id']}\nTask name - {task['task_name']}\nCreated time - {task['created_time']}")
                        print(f"Updated time - {upd_time}\nIs task completed? - {task['task_done']}\nCompleted time - {comp_time}\n")
                
                task_no_to_update = int(input("Enter task number to update:  "))
                if task_no_to_update > len(self.all_task): 
                        print("You do not have any task with {} number in your all recent tasks.".format(task_no_to_update))
                else:
                        new_task_name = input("Enter new task name:  ")
                        self.task_name = new_task_name
                        self.updated_time = dt.datetime.now().strftime("%b %d %Y, %H:%M:%S%p")

                        
class HelperClass(TaskManager): 
        def create_new_task(self):
                super().__init__()
                self.task_name = task_name
                self.created_time = dt.datetime.now().strftime("%b %d %Y, %H:%M:%S%p")
                self.updated_time = None 
                self.completed_time = None 
                self.task_done = False
                self.task_id = self.tmid()
                self.all_task.append(vars(self))
                self.incomplete_task.append(vars(self))




# tm = TaskManager()

# print(tm.task_name)
# print(tm.created_time)
# print(tm.updated_time)
# print(tm.completed_time)
# print(tm.task_done)
# print(tm.task_id)
# print(tm.all_task)

while True: 
        x = input("Input name:    ")
        tm = TaskManager()
        print(TaskManager.all_task)
        

# print()
# print(tm.task_name)
# print(tm.created_time)
# print(tm.updated_time)
# print(tm.completed_time)
# print(tm.task_done)
# print(tm.task_id)
# print(tm.all_task)
# print()
# tm.update_task()