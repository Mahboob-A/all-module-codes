    #include <stdio.h>
    int main (){
        int fullMarks = 100;
        scanf("%d", &fullMarks);

        if (fullMarks >=80) {
            printf("A+");
            return 0;
        }
        else if (fullMarks >=79) {
            printf("A");
            return 0;
        }
        else if (fullMarks >=69) {
            printf("B");
            return 0;
        }
        else if (fullMarks >=59) {
            printf("C");
        }
        else if (fullMarks >=49) {
            printf("D");
        }
        else if  ( fullMarks >= 40) {
            printf("F");
        }


    }

