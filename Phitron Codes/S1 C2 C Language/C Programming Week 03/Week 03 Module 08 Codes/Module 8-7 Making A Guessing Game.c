    #include <stdio.h>
    #include <stdlib.h>

    int main () {
        // generating random number
        srand(time(0));
        int hiddenNum = rand()%100 + 1;
        //printf("%d\n", hiddenNum);
        int number_of_guesses = 0;

        // taking guess input using while loop
        while (number_of_guesses < 10) { // 10 times life
            int guess;
            scanf("%d", &guess);

            // if conditions
            if  (guess == hiddenNum) {
                printf("You have guessed the right number.\n");
                break;
            }
            else if (guess > hiddenNum) {
                printf("Guess Smaller\n");
            }
            else {
                printf("Guess Larger\n");
            }
            number_of_guesses++; // guess ++ == life decreasing
        }
        if (number_of_guesses == 10) { // if guessed 10 times prompt
            printf("You have failed\n");
        }
    return 0;
    }
