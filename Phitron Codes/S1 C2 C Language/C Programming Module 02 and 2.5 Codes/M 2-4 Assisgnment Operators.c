     #include <stdio.h>

        int main () {

        int price;
        price = 20;
        printf("%d\n", price);

        // price er value update kora hocche nicher code e in conventional way

        price = price * 2;
        printf("%d\n", price);


        // but ai ager variable er value update korar jonno Assignment Operator use korte pari.
        //jemon price += 10. Er output hobe 30. Karon ai += plus equal to manei hocche tar
        // bam side  e j var ache tar ager value er sonege 10 add kore var ta update koro.
        // -= , *=, /= gulou aki kaj kore.


        price += 10;
        printf("%d\n", price);

        price -= 5;
        printf("%d\n", price);

        price *= 5;
        printf("%d\n", price);


        price /= 3;
        printf("%d\n", price);


        price %= 2;
        printf("%d\n", price);


        //price = 25;
        price++;
        printf("%d\n", price);


        int marks = 20;
        marks--;
        marks++;
        printf("%d\n", marks);







        return 0;
        }
