""" Py Mid Assignment """




class Star_Cinema:
        hall_list = []

        def entry_hall(self, obj):
                self.hall_list.append(obj)
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
                self.entry_hall(self)
                self.make_seat()

        def make_seat(self):
                for i in range(0, self.rows):
                        self.dummy_list.append([])
                for i in range(0, self.rows):
                        for j in range(0, self.cols):
                                self.dummy_list[i].append('empty')

        def entry_show(self, id, movie_name, time):
                tupe_data = id, movie_name, time 
                self.show_list.append(tupe_data)
                self.seats[id] = self.dummy_list 

        def search_movie(self):
                movie_id = input("input movie id to search:  ")
                for movie in self.show_list:
                    if  movie_id == movie[0]:
                                print(movie)


new_hall = Hall(2, 2, 10)
new_hall.entry_show("A1", "Good Movie", "30 Oct, 2022, 01 : PM")
new_hall.entry_show("B1", "Another Good Movie", "30 Oct, 2022, 05 : PM")
print(new_hall.dummy_list)
# print(new_hall.print_hall_list())
# new_hall.make_seat()
print(new_hall.seats)
print(new_hall.show_list)
# print(new_hall.hall_list)
new_hall.search_movie()
