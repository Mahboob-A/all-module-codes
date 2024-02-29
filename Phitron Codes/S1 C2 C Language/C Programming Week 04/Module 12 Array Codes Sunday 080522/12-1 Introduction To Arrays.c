    #include <stdio.h>

    // introduction to array: 12-1, sunday, 080522, 10.30 am

    int main () {

        // array introduction

        int marks[5];  // declaration of array and assigning its value

        for (int i=0; i<5; i++) { // array starts from 0
            printf("Enter %dth Student Number: ", i+1);
            scanf("%d", &marks[i]); // taking input of 5 students and
                                    // storing in the array
        }
        for (int i=0; i<5; i++) { // increasing the value of the array.
            marks[i] += 5;
        }

        for (int i=0; i<5; i++) {
            printf("%dth Student's Number is: %d\n", i+1, marks[i]); // marks[i] is the whole array

        }


    }
