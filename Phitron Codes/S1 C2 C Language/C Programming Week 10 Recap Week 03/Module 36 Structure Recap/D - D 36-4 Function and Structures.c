


            /// D - D 36-4 Function and Structures
            // 210622 10.02 a.m


    #include <stdio.h>
    struct Student   // structure declaration
    {
        char name[100];
        int roll;
        int marks;
    };

    void print_struct(struct Student ok)  // function declaration
    {
        printf("name: %s roll: %d marks: %d\n", ok.name, ok.roll, ok.marks);
    }

    void change (struct Student *st)
    {
        //(*st).marks = 100;  this way
        st -> marks = 100;  // or in this way needed to dereference
    }
    int main () {

        struct Student a = {"Sam", 20, 88};
        change(&a);
        print_struct(a);

    }


    /*

    #include <stdio.h>
    typedef struct
    {
        char name[100];
        int roll;
        int marks;

    }Student;

    void print_struct (Student x)
    {
        printf("Name: %s Roll: %d Marks: %d\n", x.name, x.roll, x.marks);
    }

    void change(Student *st)
    {
        st -> marks = 100;
        //(*st).marks = 100;
    }

    int main () {
        Student a = {"Sam", 21, 88};
        change(&a);
        print_struct(a);
    }

    */
