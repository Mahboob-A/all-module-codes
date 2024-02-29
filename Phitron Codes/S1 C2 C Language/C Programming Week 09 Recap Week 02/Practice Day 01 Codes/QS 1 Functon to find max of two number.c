


        /// QS 1 Function to find max of two number
        // 150622

    #include <stdio.h>
    int get_max (int a, int b)
    {
        if (a<b) return b;  // returning the max
        else     return a;
    }
    int main () {
        int x, y;
        scanf("%d %d", &x, &y);

        int max = get_max(x, y);
        printf("The max number is: %d\n", max);
    }
