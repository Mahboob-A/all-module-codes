

        /// D - D Polyhedrons in Anton's Collection.

    #include <stdio.h>
    #include <string.h>
    int main () {
        char str[1001];
        int i, n;
        scanf("%d", &n);
        getchar();

        int sum = 0;
        for (i=0; i<n; i++)
        {
            scanf("%s", str);


            if (strcmp(str, "Tetrahedron")==0)
            {
                sum+=4;
            }
            else if (strcmp(str, "Cube")==0)
            {
                sum+=6;
            }
            else if (strcmp(str, "Octahedron")==0)
            {
                sum+=8;
            }
            else if (strcmp(str, "Dodecahedron")==0)
            {
                sum+=12;
            }
            else if (strcmp(str,"Icosahedron")==0)
            {
                sum+=20;
            }

        }
        printf("%d", sum);

        return 0;


    }










