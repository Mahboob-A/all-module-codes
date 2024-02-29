      #include <stdio.h>

    int main () {

    int height;
    printf("Enter height in inches: ");
    scanf("%d", &height);

    int feet, inch;
    feet = height/12;
    inch = height%12;

    printf("Your height is %d feet %d inches.\n", feet, inch);



    return 0;
    }
