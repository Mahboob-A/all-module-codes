
    #include <stdio.h>
    typedef struct
    {
        char name[100];
        int roll;
        float marks;
    }Student;

    void print_struct (Student a)  // function to print
    {
        printf("Name: %s Roll: %d Marks: %.2f\n", a.name, a.roll, a.marks);
    }

    Student max = {.marks=0};   // declaring two variable min and max and assigning their .marks value
    Student min = {.marks=101};

    void getMinMaxMarks (Student ar[], int n)   // function to get min and max number
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


    int main () {
        int i, n;
        printf("Enter number of students: ");
        scanf("%d", &n);

        Student ar[n];     // struct array
        printf("Enter name roll and marks (marks in decimal): \n");
        for (i=0; i<n; i++)
        {
            scanf("%s %d %f", &ar[i].name, &ar[i].roll, &ar[i].marks);  // reading array elements
        }
        printf("\n\nAll details in organised order: \n\n");

        for (i=0; i<n; i++)
        {
            print_struct(ar[i]);
        }

        getMinMaxMarks(ar, n);  // calling function

        printf("\nMax marks obtained by: \n");

        printf("Name: %s Roll: %d Marks: %.2f\n", max.name, max.roll, max.marks);

        printf("\nLeast marks obtained by: \n");

        printf("Name: %s Roll: %d Marks: %.2f\n", min.name, min.roll, min.marks);


    }

