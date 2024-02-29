    #include <stdio.h>     // 12-4 Variable length arrays
    int main () {

        // user theke input neowa holo variable length array
        int students;
        printf("Enter number of students: ");
        scanf("%d", &students);

        int marks[students]; // Variable length array

        for (int i=0; i<students; i++) {
            printf("Enter %dth Student Number: ", i+1);
            scanf("%d", &marks[i]);
        }
        //for (int i=0; i<5; i++) {
            //marks[i] += 5;
        //}

        for (int i=0; i<students; i++) {
            printf("%dth Student's Number is: %d\n", i+1, marks[i]); // marks[i] is the whole array

        }


    }



