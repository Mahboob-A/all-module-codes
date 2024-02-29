
         /// structure code 210622
        // same dhoroner number ki vabe ber korbo
        // go to support

    #include <stdio.h>

    typedef struct //custom data type to store char, int and flaot
    {
        char name[100];
        int roll;
        float marks;
    }Student;

    void print_struct (Student a)  // fnctn to print all elements
    {
        printf("Name: %s Roll: %d Marks: %.2f\n", a.name, a.roll, a.marks);
    }

    Student max = {.marks=0};// setting two instances for max n min
    Student min = {.marks=101};

    void getMinMaxMarks (Student ar[], int n)  // fnctn to get min                                             max marks
    {
        for (int i=0; i<n; i++)
        {
            if (ar[i].marks > max.marks)
            {
                max = ar[i];
            }
            if (ar[i].marks < min.marks)
            {
                min = ar[i];
            }
        }
    }
    Student sm[100];    // struct array to store same marks
    void sameMarks (Student ar[], int n) // fnctn to get same marks
    {

        for (int i=0; i<n; i++)
        {
            if (ar[i].marks == )  // condition ?
                sm[i] = ar[i];

        }

    }


    int main () {
        int i, n;
        printf("Enter number of students: ");
        scanf("%d", &n);

        Student ar[n];   // array of struct
        printf("Enter name roll and marks (marks in decimal): \n");
        for (i=0; i<n; i++)   // reading array
        {
            scanf("%s %d %f", &ar[i].name, &ar[i].roll, &ar[i].marks);
        }
        printf("\n\nAll details in organised order: \n\n");

        for (i=0; i<n; i++)  // printing all values
        {
            print_struct(ar[i]);
        }

        getMinMaxMarks(ar, n);  // calling functions
        sameMarks(ar, n);

        printf("\nMax marks obtained by: \n");

        printf("Name: %s Roll: %d Marks: %.2f\n", max.name, max.roll, max.marks);

        printf("\nLeast marks obtained by: \n");

        printf("Name: %s Roll: %d Marks: %.2f\n", min.name, min.roll, min.marks);

        printf("Same marks obtained by: \n");  // fix it
        for (i=0; i<5; i++)
        {
            printf("Name: %s Roll: %d Marks: %.2f ", sm[i].name, sm[i].roll, sm[i].marks);
        }


    }





