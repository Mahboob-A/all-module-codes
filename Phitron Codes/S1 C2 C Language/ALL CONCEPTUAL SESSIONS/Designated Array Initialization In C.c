



    /// Designated Array Initialization In C
    // 060722 11.30 pm

    #include <stdio.h>

    int main() {

        int ar[5] = {[0] = 5, [1] = 4, [2] = 3, 1, 2};

        for (int i=0; i<5; i++)
        {
            printf("%d ", ar[i]);
        }


        return 0;
    }

