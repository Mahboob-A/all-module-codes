""" 
Mod Date: 051122, Saturday
Watch Date: 061122, Sunday, 09.15 pm
20-2 Explore how to read values from a csv file
"""
import csv 

lst = []
with open('./data/My_Csv_data.csv', 'r') as file:
        lines = csv.reader(file)
        header = next(lines)  # this will remmove the header file if we need to skip the header file in csv 
        for line in lines:
                if 'Alam' in line[1]:
                        print(line)
                lst.append(line)

print(lst)
