    #include <stdio.h>   // 12-6 Using array as counters - Monday, 090522, 07.30 a.m
    int main () {
        int number_of_users;
        scanf("%d", &number_of_users);

        int ratings[number_of_users];
        for (int i=0; i<number_of_users; i++) {
            scanf("%d", &ratings[i]);
        }
        int sum = 0;
        for (int i=0; i<number_of_users; i++) {
            sum += ratings[i];
        }
        double average = (double)sum/number_of_users;
        printf("%.3lf\n", average);

        // counting the ratings below

        int count[6] = {0};
        for (int i=0; i<number_of_users; i++) {
            int x = ratings[i];
            count[x]++;
        }
        for (int i=0; i<=5; i++) {
            printf("%d -> %d\n", i, count[i]);
        }







//        for (int value=0; value<=5; value++) {
//            int count = 0;
//            for (int i=0; i<number_of_users; i++) {
//                if (ratings[i] == value) {
//                    count++;
//                }
//            }
//            printf("%d -> %d\n", value, count);
//
//        }



    }
