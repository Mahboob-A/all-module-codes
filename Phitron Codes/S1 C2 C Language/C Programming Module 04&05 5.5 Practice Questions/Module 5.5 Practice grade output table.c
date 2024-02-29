    #include <stdio.h>


/// grade calculator

    int main() {
        printf("Enter Marks: \n");

        int marks;
        scanf("%d", &marks);

          if (marks >= 80) {
            printf("A+");
          }
          else if (marks >= 70) {
            printf("A");
          }
          else if (marks >= 60) {
            printf("B");
          }
          else if (marks >=50) {
            printf("C");
          }
          else if (marks >= 40) {
            printf("D");
          }
          else {
            printf("F");
          }


    }


