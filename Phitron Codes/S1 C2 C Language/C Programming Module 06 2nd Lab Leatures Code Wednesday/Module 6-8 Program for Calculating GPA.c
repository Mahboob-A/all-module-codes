    #include <stdio.h>
    #include<stdbool.h>

    /** /// multiplication chart
    int main () {
        int n;
        scanf("%d", &n);

        for (int row=1; row<=n; row++) {
            for (int col=1; col<=n; col++) {
                printf("%d ", row*col);
            }
            printf("\n");
        }

    }

    **/

  /// GPA Calculator

    int main () {
        int numberOfSubjects;
        scanf("%d", &numberOfSubjects);

    bool failed = false;

    int totalGradepoint = 0;
    for (int i=1; i<=numberOfSubjects; i++) {
         printf("Enter Marks: \n");

          int marks, gradepoint;
          scanf("%d", &marks);

          if (marks >= 80) {
            printf("Grade: A+\n");
            gradepoint = 5;
          }
          else if (marks >= 70) {
            printf("Grade: A\n");
            gradepoint = 4;
          }
          else if (marks >= 60) {
            printf("Grade: B\n");
            gradepoint = 3;
          }
          else if (marks >=50) {
            printf("Grade: C\n");
            gradepoint = 2;
          }
          else if (marks >= 40) {
            printf("Grade: D\n");
            gradepoint = 1;
          }
          else {
            printf("Grade: F\n");
            gradepoint = 0;
            failed = true;
          }
          totalGradepoint += gradepoint; // gradepoint ta protibar jog hocche
          printf("Grade Point = %d\n", gradepoint);
       }
       if (failed) {
          printf("You have failed the examination. Your GPA = 0.0\n");
       }
       else {
           double gpa = (double)totalGradepoint / numberOfSubjects;
           printf("GPA = %.2lf\n", gpa);
       }

    }
