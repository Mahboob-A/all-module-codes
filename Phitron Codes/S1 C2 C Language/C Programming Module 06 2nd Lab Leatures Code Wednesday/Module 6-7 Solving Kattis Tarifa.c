    #include <stdio.h>

    int main () {
        int dataLimit, month;
        scanf("%d %d", &dataLimit, &month);

        int unusedData = 0;

        for (int m=1; m<=month; m++) {
            int usedData;
            scanf("%d", &usedData);

            int monthLimit = dataLimit + unusedData;
            unusedData = monthLimit - usedData;

            printf("Limit %d, used %d, remaining %d\n", monthLimit, usedData, unusedData);
        }
        int finalLimit = dataLimit + unusedData;
        printf("%d", finalLimit);


    }
