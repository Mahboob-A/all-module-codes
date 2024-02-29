    #include <stdio.h>
    int main () {
        int xyz;
        scanf("%d", &xyz);


       int c = xyz % 10; // mod operation to find the last number
       int bc = xyz / 10; // finding the b and c
       int b = bc % 10;
       int a = bc / 10;

       int abc = (a*100 + b*10 + c*1); // positioning of the found numbers
       int bca = (b*100 + c*10 + a*1);
       int cab = (c*100 + a*10 + b*1);

       printf("%d", abc+bca+cab);
    }
