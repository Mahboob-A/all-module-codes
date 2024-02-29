    #include <stdio.h>
    int main () {
        int n;
        scanf("%d", &n); // number of days input nicchi

    int negCount = 0; // negative count er jonno var initially set to 0.
    for (int i=1; i<=n; i++) { // loop chalacchi n tomo bar

         int num;
         scanf("%d", &num);  // akhane abar inputed n er value ke ak ak kore input nicchi

         if (num <0) { // value negative hobar condition
            negCount++; // jodi negative hoy tobe negCount var ke +1 kore baracchi
         }
    }
    printf("%d", negCount); // finally negative numbers ke print dicchi

    }





