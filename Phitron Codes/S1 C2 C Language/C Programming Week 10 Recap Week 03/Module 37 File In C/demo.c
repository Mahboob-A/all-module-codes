


        /// demo page
        // 220622 06.20 am



    #include <stdio.h>
    int main () {
        int i, n;
        scanf("%d", &n);

        int sum = 0;
        for (i=0; i<n; i++)
        {
            int num;
            scanf("%d", &num);
            sum += num;
        }

        printf("Sum -> %d", sum);


    }

