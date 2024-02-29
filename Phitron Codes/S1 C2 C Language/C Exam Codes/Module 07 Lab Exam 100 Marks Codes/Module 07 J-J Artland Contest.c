/*
There are two types of contest in Artland .
Avishek has decided to participate in Artland Beginner Contest (ABC)
if his current rating is less than 12001200, and participate
in Artland Regular Contest (ARC) otherwise.

You are given Avishek's current rating, x.
Print ABC if Avishek will participate in ABC,
and print ARC otherwise.
*/

    #include <stdio.h>
    int main () {
        int currentScore;
        scanf("%d", &currentScore);
    int num = 1200;
    if (currentScore < num) {
        printf("ABC");
    }
    else {
        printf("ARC");
    }

    }
