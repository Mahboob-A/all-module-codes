    #include <stdio.h>

    //All about while loop

// while loop structure

//    while (condition) {
//        statement;
//    }
           //   for loop >   for (int i=1; i<=5; i++) {
//                              printf("%d\n", i);
//                       }
//
//    int main () {
//
//        int i=1;
//        while (i<=5) {
//            printf("%d\n", i);
//            i++;
//        }
//
//    }


    int main () {

        int money = 0;
        int targetMoney = 100;

        while (money < targetMoney){
            printf("Enter Amount: ");
            int receivedMoney;
            scanf("%d", &receivedMoney);
            money +=receivedMoney;
            printf("Current Amount: %d\n", money);
        }
        printf("Target Amount: %d\n", targetMoney);
        printf("Total Current Amount: %d\n", money);

    }
