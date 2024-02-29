


            /// C - C 38-3 Get Total Marks of All Unique Students
            // 230622 0450 pm


    #include <stdio.h>
    #include <stdbool.h>
    #include <string.h>
    struct Student
    {
        char name[100];
        int id;
        int marks;
    };

    struct Unique_Student
    {
        char name[100];
        int id;
        int total;
    };

    int main () {
        printf("Enter number of students: \n");
        int i, j, n;
        scanf("%d", &n);

        struct Student students[n];  // array for general info of all students
        struct Unique_Student unique_students[n];  // array to store unique (unique means 1) students's info

        printf("Enter %d students Name, Id and Marks: \n", n);
        int k=0; // k is number of unique students
        for (i=0; i<n; i++)
        {
            scanf("%s %d %d", &students[i].name, &students[i].id, &students[i].marks);
            bool found = false;
            for (j=0; j<k; j++)  // loop until k i.e number of unique students
            {
                if (unique_students[j].id == students[i].id)  // check if unique_students[j].id matches with general student id || if matches means this id is already in unique_students array list
                {
                    unique_students[j].total += students[i].marks;  // then add the marks of that student to total in unique_student array of total
                    found = true;  // make unique student found == true
                }
            }
            if (found == false) // if the id is not present in unique_students array then include it in that array
            {
                strcpy(unique_students[k].name, students[i].name); // insert all general info of genera info array i.e 1st array to unique_students array from k index
                unique_students[k].id = students[i].id;
                unique_students[k].total = students[i].marks;
                k++;  // and then increase k so that if another id not found in unique_students array, so that that id could be inserted in k+1 'th index
            }

        }

        for (i=0; i<k; i++)  // loop until k times as we want to print unique elements and k is the index of unique elements
        {
            printf("Name: %s Id: %d Total Marks: %d\n", unique_students[i].name, unique_students[i].id, unique_students[i].total); // print unique_students array as here we have inserted the calculation
        }


        return 0;
    }
