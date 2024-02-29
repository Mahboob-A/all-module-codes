


        /// QS 02 Function to find Min of two value
        // 150622

    #include <stdio.h>
    int get_min (int a, int b)
    {
        if (a<b) return a;
        else     return b;
    }
    int main () {
        int x, y;
        scanf("%d %d", &x, &y);

        int min = get_min(x, y);
        printf("The min number is: %d\n", min);
    }

