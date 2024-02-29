


            /// E - E 36-5 Array of Structures
            // 210622 11.00 a.m


    #include <stdio.h>
    struct Student    // user defined struture
    {
        char name[100];
        int roll;
        int marks;

    };

    void print_struct (struct Student x)  // function to print
    {
        printf("Name: %s Roll: %d Marks: %d\n", x.name, x.roll, x.marks);
    }

    void change(struct Student st[])    // receiving the array
    {
        st[0].marks = 100;  // and changing the 0th index's marks to 100
    }

    int main () {
        int i, n;

        printf("Enter number of students: ");
        scanf("%d", &n);

        printf("Enter Name roll and marks of students: \n");

        struct Student a[n];    /// declared a struct array with variable length

        for (int i=0; i<n; i++)
        {
            scanf("%s %d %d", &a[i].name, &a[i].roll, &a[i].marks);  // reading struct array input
        }

        change(a); // passing the struct variable a to a function
        printf("\n");

        for (int i=0; i<n; i++)
        {
            print_struct(a[i]);  // printing through function
        }


    }
