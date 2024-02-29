


    /// a program by todays lecture
    /// input number of students, their name roll and marks and print all
    /// details with organized order and find who obtained the highest marks

    #include <stdio.h>

    struct Student
    {
        char name[100];
        int roll;
        int marks;
    };

    struct Student max = {.marks = 0};

    void findMax (struct Student st[], int n)
    {

        for (int i=0; i<n; i++)
        {
            if (st[i].marks > max.marks)
                max = st[i];
        }
    }

    void print_struct (struct Student a)
    {
        printf("Name: %s Roll: %d Marks: %d\n", a.name, a.roll, a.marks);
    }

    int main () {
        int i, n;
        printf("Enter number of students: ");
        scanf("%d", &n);

        struct Student ar[n];
        printf("Enter name roll and marks: \n");

        for (i=0; i<n; i++)
        {
            scanf("%s %d %d", &ar[i].name, &ar[i].roll, &ar[i].marks);
        }

        printf("\nList of all students with their details: \n\n");

        for (i=0; i<n; i++)
        {
            print_struct(ar[i]);
        }

        printf("Highets marks obrained by: \n");

        findMax(ar, n);
        printf("\nName: %s roll: %d marks: %d\n", max.name, max.roll, max.marks);

    }
