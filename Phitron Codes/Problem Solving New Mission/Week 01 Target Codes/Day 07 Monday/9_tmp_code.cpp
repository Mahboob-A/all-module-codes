


/*  
submitting all the vj problems on cf 
200223, Monday, 07.30 pm 

*/


    #include <stdio.h>
    int main () {

        int age1, age2;
        scanf("%d %d", &age1, &age2);

        int years = 0;
        while (age1<=age2) {
            age1 *=3;
            age2 *=2;
            years ++;
        }
        printf("%d\n", years);
    }
