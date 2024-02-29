    #include <stdio.h>  // 12-2 How arrays work, Size of an array. sunday, 080522, 05.15 pm
    int main () {
        const int n = 10;
        int values[n];

        for (int i=0; i<n; i++) { // array te 10 value loop diye
                                  // 0=1, 1=2, 2=3, 3=4 ai vabe distribute kora holo
            values[i] = i; // = i +1 => // puro array te protita index e 1 kore jog kora holo
            //values[i] = i+1;

          /*
          ai value[i] = i+1; khane jodi value
          na deowa hoy tobe garbage
          print korbe. i+1 e 1 er
          jaigai jodi 0 deowa hoy
          tobe index er number er value
          print hobe

          *** int values[n] => ata array declare
          kora holo with its size

          *** values[i] = i+1 => ata te array te
          value assign kora holo
          protita index no e +1 kore value assign kora holo


         */  // mane array er index value increase kora hocche



         values[4] = 10;
         values[6] += values[1] + values[2];
         printf("Values: [%d] = %d\n", i, values[i]);
        }


       printf("%d\n", sizeof(values)); // whole array size
       printf("%d\n", sizeof(values) / sizeof(values[0])); // length of array ber korar sutro
    }
