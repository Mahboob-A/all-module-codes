


            /// C - C 36-3 Structures Input and Output
            // 210622 09.22 a.m


    #include <stdio.h>
    struct Student
    {
        char name[100];
        int roll;
        int marks;

    };
    int main () {
        int i, n;
        printf("Input number of students: ");
        scanf("%d", &n);

        // array te data store na kore loop er moddhei check kore neowa highest marks

        struct Student highest = {.marks=0};   // student data type diye 2nd variable highest declare kore tar marks er value assigh kora holo

        for (i=0; i<n; i++)
        {
            struct Student a;      // a khane normal students er value input neowa hocche
            printf("Input name, roll and marks: ");
            scanf("%s %d %d", &a.name, &a.roll, &a.marks);

            if (a.marks > highest.marks)  // check kora hocche highest var er songe a var er marks er moddhe boro ke
                highest = a;    // tarpor boro a er value highest er marks e dowa hocche
        }

        printf("Highest marks holder: Name - %s Roll - %d Marks - %d", highest.name, highest.roll, highest.marks);
        // highest sob name, roll marks access korte parche karon highest and a dujonei holo Student data typer variable tai
        // dujoner kachei Students er sob kichu ache



    }
