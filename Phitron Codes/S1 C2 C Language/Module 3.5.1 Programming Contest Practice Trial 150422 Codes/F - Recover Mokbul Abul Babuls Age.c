    /*
    Mokbul has two sons - Abul and Babul. Mokbul remembers Abul's age
    but has forgotten Babul's age. But he remembers their average age.
    Help Mokbul remember Babul's Age.

    Hint: average age = (abul's age + babul's age)/2. How can you recover babul's
    age from this equation?
    */

        #include <stdio.h>

         int main () {

         int abulAge, averageAge;
         scanf("%d %d", &abulAge, &averageAge);
         int totalAge = averageAge*2;

         printf("%d", totalAge-abulAge);


         return 0;
         }
