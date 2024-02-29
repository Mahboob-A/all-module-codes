    #include <stdio.h>
    /// Bjorn Ironside chess King Harald.
    int main () {
        int n;             // n = total games played botg
        scanf("%d", &n);
        getchar();

        int iron = 0, king = 0;
        char game[n];
        scanf("%s", &game);
        for (int i=0; game[i]!='\0'; i++) {

            if (game[i] == 'A') {
                iron++;
            }
            if (game[i] == 'D') {
                king++;
            }
        }


            if (iron > king) {
               printf("Anton\n");
            }
            else if (king > iron) {
                printf("Danik\n");
            }
            else if (iron == king) {
              printf("Friendship\n");
            }
        return 0;

    }

/**

    #include <stdio.h>
    /// Bjorn Ironside chess King Harald.
    int main () {
        int n, i, iron=0, king=0;
        scanf("%d", &n);
        char game[n];
        scanf("%s", &game);
        for (int i=0; game[i]!='\0'; i++) {

            if (game[i] == 'A') {
                iron++;
            }else if (game[i] == 'D') {
                king++;
            }
        }

        if (iron > king) {
           printf("Anton\n");
        }
        else if (king > iron) {
            printf("Danik\n");
        }
        else if (iron == king) {
          printf("Friendship\n");
        }
        return 0;
    }
**/
