      #include <stdio.h>

    int main () {

    int inum1, inum2;
    float fnum1, fnum2;

    printf("Enter Integers: ");
    scanf("%d %d", &inum1, &inum2);

    printf("Enter Real Numbers: ");
    scanf("%f %f", &fnum1, &fnum2);

    printf("%d %d\n", inum1+inum2, inum1-inum2);
    printf("%.1f %.1f", fnum1+fnum2, fnum1-fnum2);



     return 0;
     }