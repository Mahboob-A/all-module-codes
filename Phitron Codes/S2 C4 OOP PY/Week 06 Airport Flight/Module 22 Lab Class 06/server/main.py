""" event - driven programme """
"""  
object processor 
Lab class 06 Week 06 
091122, Wednesday, 10.00 pm  
"""


import glob
import shutil
from os import remove

source_path = '../source/*'   # going one step back, going to the mother folder of source as we are inside server folder and source folder is in mohter folder 
destination_path = '../destination'   # we need give / this to write inside the folder and as I have given it in below loop, do not need to give it here again 


# I have to make the the copy of the file and put name_i.txt where i is number of copy 
postfix_numbers = [1, 2, 3]

# puttin this in while loop so it always checks, processes the whole thing if source has any event 

while True:

        # accessing the sourse directory 
        source_object = glob.glob(source_path)  
        print(source_object)
        #  if len(source_obejct) > 0: also works         
        if source_object:
                # getting the source path as glob returns a list, and as we are just accessing one path, so taking the 0'th element as source path 
                object_path = source_object[0]
                print("Object Path:  ",object_path)  # str  ../source\source_file.txt

                # copyting the object from the source to server i.e here using '.' dot operator
                shutil.copy(object_path, '.')


                # everything below is done under server folder
                current_object_path = object_path.split('\\')[1]
                print("Current Obejct path:  ", current_object_path)

                object_name = object_path.split('\\')[1].split('.')  # getting the ['source_file', 'txt'] as list 
                print(object_name)

                prefix_name = object_name[0]
                postfix_name = object_name[1]
                # print(prefix_name)   # source_file
                # print(postfix_name)  # txt 


                for postfix_value in range(len(postfix_numbers)):
                        file_name = prefix_name + '_' + str(postfix_numbers[postfix_value]) + '.' + postfix_name 
                        # print(file_name)
                        shutil.copy(object_path, f'{destination_path}/{file_name}')    
                # copying the object from source path, then renaming and then moving it to the destination folder using the file name 

                # deleting the objects from the sourse and server after the event driven process 
                # remove(object_path)
                # remove(current_object_path)


# output of file name
# source_file_1.txt
# source_file_2.txt
# source_file_3.txt
