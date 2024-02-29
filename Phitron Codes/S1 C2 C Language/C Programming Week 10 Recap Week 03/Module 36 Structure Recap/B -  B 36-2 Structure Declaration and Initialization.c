


            /// B -  B 36-2 Structure Declaration and Initialization
            // 21.06.22 07.50 am



    #include <stdio.h>
    #include <string.h>
    struct Student
    {
        char name[100];
        int  roll;
        float marks;
        int last_marks[5];
    };
    int main () {

        struct Student a = {"Sam", 20, 80.05};  // maintain serial

        // or

        //struct Student a = {.roll = 20, .marks = 80.05, .name = "Sam"};  // don't need to maintain serial

        strcpy(a.name, "Sam"); // just inputing style of only a string

        //but can never do this a.name = "Sam";

        for (int i=0; i<5; i++)   // input style of normal array
        {

            scanf("%d", &a.last_marks[i]);
        }

        printf("Name - %s Roll %d Marks %.2f\n", a.name, a.roll, a.marks);
        for (int i=0; i<5; i++)
        {
            printf("%d ", a.last_marks[i]);
        }




    }
