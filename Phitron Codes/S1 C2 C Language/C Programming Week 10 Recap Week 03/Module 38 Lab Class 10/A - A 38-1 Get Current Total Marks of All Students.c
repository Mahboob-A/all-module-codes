


            /// A - A 38-1 Get Current Total Marks of All Students
            // 230622 09.09 am


    #include <stdio.h>
    typedef struct
    {
        char name[100];
        int id;
        int marks;
        int total;  // current total marks will be stored here
    }Student;


    int main () {
        int i, j, n;
        scanf("%d", &n);

        Student st_data[n];  // array of struct

        for (i=0; i<n; i++)
        {
            scanf("%s %d %d", &st_data[i].name, &st_data[i].id, &st_data[i].marks);
            int sum = 0;  // sum declared here so that each time i increases the sum becomes 0 for new variable
            for (j=0; j<=i-1; j++) // checking j<i or j<=i-1 i.e all the elements before current element of i
            {
                if (st_data[i].id == st_data[j].id) // if present id matches with before id
                {
                    sum += st_data[j].marks; // sum the before marks of j
                }
            }
            int new_sum = st_data[i].marks + sum;  // 2nd loop finds sum of before same id marks sum, so here the current i'th elements's sum needed to count with before sum
            st_data[i].total = new_sum;   // setting new_sum of the total sum of same id into total of the struct
        }

        for (i=0; i<n; i++)
        {
            printf("Name: %s Id No: %d Marks: %d Current Total Marks: %d\n", st_data[i].name, st_data[i].id, st_data[i].marks, st_data[i].total);
        }


    }
