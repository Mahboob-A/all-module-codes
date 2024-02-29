

    /*

    Self Question 140422
    Find the area and perimeter of a house input by inch and
    output in feet and inch

    */

       #include <stdio.h>

        int main () {

        int lengthInch, wideInch;
        printf("Enter length and wide in inch: ");
        scanf("%d %d", &lengthInch, &wideInch);

        float lengthFeet = (float)lengthInch / 12;
        float wideFeet = (float)wideInch / 12;

        /*
        Explicit Conversion of int lengthInch and wideInch into
        float data type so that the real portion of the division
        can be calculated
        */

        float area = lengthFeet * wideFeet;
        float perimeter = 2 * (lengthFeet + wideFeet);

        printf("The area and perimeter of the house is %.2f %.2f", area, perimeter);



        return 0;
        }
