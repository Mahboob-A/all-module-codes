


            /// B - B 38-2 Get Total Marks of 2 Unique Students
            // 230622 04.27 pm


    #include <stdio.h>
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
         int i, n;
         scanf("%d", &n);
         struct Student data[n];

         struct Unique_Student rakib = {"Rakib", 1123, 0};
         struct Unique_Student sakib = {"Sakib", 2313, 0};

         for (i=0; i<n; i++)
         {
             scanf("%s %d %d", &data[i].name, &data[i].id, &data[i].marks);
             if (data[i].id == rakib.id)
             {
                 rakib.total += data[i].marks;
             }
             else
             {
                 sakib.total += data[i].marks;
             }
         }



        printf("Name: %s Id: %d Total: %d\nName: %s Id: %d Total: %d\n", rakib.name, rakib.id, rakib.total, sakib.name, sakib.id, sakib.total);



    }
