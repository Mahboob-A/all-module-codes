
        /// A-A 28-1 Introduction to Array and Why Array is Used.

    #include <stdio.h>
    int main () {
        int note;
        int cnt = 0;
        for (int i=1; i<=5; i++)  // note variable e jotoi input deowa hok na keno,
                                    // se sudhu matro tar last er value take save rakhe
                                    // 2nd value 1st value er opor override kore
                                    // tai sudhu 2nd ba last value ta paowa jai
                                    // ai karone sob value save kore rakhar jonno array
                                    // ba data structure proyojon.
        {
            scanf ("%d", &note);
            if (note == 100)
                cnt++;
        }
        printf ("note -> %d count -> %d", note, cnt);
    }
