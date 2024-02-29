   /// 14-3 Solving Atcoder Digit Machine

    #include <stdio.h>
    int main () {

        int to[10]; // there will be 10 digits

        for (int i=0; i<10; i++) {
            scanf("%d", &to[i]); // taking 10 digits
        }

        int current = 0; // current value is 0

        for (int i=0; i<3; i++) { // pressing 3 times i.e 3 times loop
            current = to[current];

                                      /*
                                      as in the statement
                                      says current value goes
                                      to array[current]
                                      if current is k then 3 times
                                      is k = array[k]
                                      */
        }
        printf("\n%d\n", current);

    return 0;
    }
