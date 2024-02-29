

        /// Q 2 -> program with global variable

    #include <stdio.h>

    int number = 0;
    void set (int v)
    {
        number = v;
    }

    void print (void)
    {
        printf("%d\n", number);
    }

    void makeDouble (void)
    {
         return number *=2;
    }

    int main () {
        set(10);
        set(5);
        print();
        //int db = makeDouble();

        makeDouble();
        makeDouble();
        print();
    }
