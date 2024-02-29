""" Py Mid Assignment """


from multiprocessing import dummy
from operator import ne


class Star_Cinema:
        hall_list = []

        def entry_hall(self, rows, cols, hall_no):
                self.hall_list.append(
                    {'row': rows, 'col': cols, 'hall': hall_no})

        def print_hall_list(self):
               for i in self.hall_list:
                       print(i, end=" ")


class Hall(Star_Cinema):
        def __init__(self, rows, cols, hall_no):
                self.rows = rows
                self.cols = cols
                self.hall_no = hall_no
                self.seats = {}
                self.show_list = []
                self.dummy_list = []
                self.entry_hall(self.rows, self.cols, self.hall_no)

        def make_seat(self):
                for i in range(0, self.rows):
                       self.dummy_list.append([])
                for i in range(0, self.rows):
                       for j in range(0, self.cols):
                               self.dummy_list[i].append('empty')
                print(self.dummy_list)

        def entry_show(self, id, movie_name, time):
                tupe_data = id, movie_name, time
                self.show_list.append(tupe_data)
                self.seats = {id : [['empty' for empty in range(self.rows)] for j in range(self.cols)]}
                

new_hall = Hall(5, 5, 10)

# print(new_hall.print_hall_list())
# new_hall.make_seat()
# print(new_hall.seats)
# print(new_hall.hall_list)

new_hall.entry_show("A1", "Good Movie", "30 Oct, 2022")
new_hall.dummy_list
