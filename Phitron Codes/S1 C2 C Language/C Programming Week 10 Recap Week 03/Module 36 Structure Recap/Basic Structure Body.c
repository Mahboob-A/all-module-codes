


            /// Basic Structure Body
            // 200622 05.00 p.m


    /*
    structure is just user defined data structure just like int, char or double

    */



     // structure basics

    #include <stdio.h>
    #include <string.h>
    int main () {
        typedef struct              // typedef likhle direct struct name call kora jai
        {
            int no;                 // vitore je je rokomer data lagbe seta define korte hoy
            char name[50];
        }book;              // ai ta holo user defined structure name

        book self1, self2, self3; // book akhn data structure j int o char type array rakjte pare
                                    // just like int or char datatype
                                    // book data structure ke call kore 3 ta instances kora holo


        self1.no = 1;      // struct e j dt te je name deowa hoyechilo sei name er age instance name o tarapor . dot diye oi dt er name then ja value rakhte chai
        strcpy(self1.name, "Learn Programming");  // jehetu struct e char type array ache tai akhn = sign diye deowa kabe na, akhn strcpy use kore value dite hobe

        self2.no = 2;
        strcpy(self2.name, "Weight Loss Strategy");

        self3.no = 3;
        strcpy(self3.name, "Finalcial Freedom Secrets");


    printf("Book no: %d Book name: %s\n", self1.no, self1.name);  // now print
    printf("Book no: %d Book name: %s\n", self2.no, self2.name);
    printf("Book no: %d Book name: %s\n", self3.no, self3.name);


    }


