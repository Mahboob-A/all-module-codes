        #include <stdio.h>

            int main()
                        {


            int marks_english;
            int marks_math;


            marks_english = 90;
            marks_math = 85;



            int total_marks;
            total_marks = marks_english + marks_math;

            printf(" Your total marks in English and Math is %d", total_marks);

            /*

            to take input from user, we need to use a function named " scanf " followed
            by format specifyer and the var we want to store data to

            */


            printf(" Enter your marks in English and Math ");
            scanf(" %d %d", &marks_english, &marks_math);

            printf(" Your total marks in English and Math is %d", total_marks);












     return 0;
 }
