
        /// function to find square and cube

        #include <stdio.h>
        #include <conio.h>

        void getSquar (void)
        {
            int i;
            printf ("\n\n Number \t Square\n");
            for (i=1; i<=10; i++)
            {
                printf ("%3d %15d\n", i, i*i);
            }
        }

        void getCube (void)
        {
            int i;
            printf ("\n\n Number \t Cube\n");
            for (i=1; i<=10; i++)
            {
                printf ("%3d %15d\n", i, i*i*i); // %3d or %15d is spacing between results
            }
        }


        int main () {
            //clrscr();

            printf ("Press any key to get Square from 1 to 10");
            getch();
            getSquar();

            printf ("Press any key to get Cube from 1 to 10");
            getch();
            getCube();

        }

