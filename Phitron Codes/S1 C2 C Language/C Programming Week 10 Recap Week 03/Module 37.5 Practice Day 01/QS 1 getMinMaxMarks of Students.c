


            /// QS 1 getMinMaxMarks of Students
            // 220622 0520 pm





    #include <stdio.h>
    typedef struct
    {
        char name[50];
        float marks;
        int roll;
        char section;
        int whichClass;

    }Student;

    Student max = {.marks = 0 };
    Student min = {.marks = 101};

    void getMinMaxMarks (Student * ar, int n)
    {

        for (int i = 0; i < n; i++)
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

    void print_struct (Student a)
    {
        printf ("Name: %s Marks: %.2f Roll: %d\n", a.name, a.marks, a.roll);
    }


    main ()
    {
        printf("Number of students: \n");
        int i, n;
        scanf ("%d", &n);

        Student ar[n];
        printf("Input name, marks(decimal), roll, section and which class: \n");

        for (i = 0; i < n; i++)
        {
            scanf ("%s %f %d %c %d", &ar[i].name, &ar[i].marks, &ar[i].roll, &ar[i].section, &ar[i].whichClass);
        }

        getMinMaxMarks (ar, n);

        printf ("Max marks obtained by: \n");
        printf ("Name: %s Marks: %.2f Roll: %d Section: %c Class: %d\n\n", max.name, max.marks, max.roll, max.section, max.whichClass);

        printf("Min marks obtained by: \n");
        printf ("Name: %s Marks: %.2f Roll: %d Section: %c Class: %d\n\n", min.name, min.marks, min.roll, min.section, min.whichClass);


    }

