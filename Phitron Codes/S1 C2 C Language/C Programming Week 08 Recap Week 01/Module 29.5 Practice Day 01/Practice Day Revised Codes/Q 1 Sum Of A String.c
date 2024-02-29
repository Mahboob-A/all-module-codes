



        /// E-E 29-5 Sum of Two Strings

    #include <stdio.h>
    int main () {
        char a[25], b[25], jogfol[101];
        scanf ("%s %s", &a, &b);
        strrev(a);
        strrev(b);
        int lenA = strlen(a);
        int lenB = strlen(b);

        int i=0, j=0, k=0, hate=0;
        while (i<lenA && j<lenB)
        {
            int sum = (a[i]-'0') + (b[j]-'0') + hate;
            jogfol[k] = (sum%10+'0');
            hate = sum / 10;
            i++;
            j++;
            k++;
        }
        while (i<lenA)
        {
            int sum = (a[i]-'0') + hate;
            jogfol[k] = (sum%10+'0');
            hate = sum / 10;
            i++;
            k++;
        }
        while (j<lenB)
        {
            int sum = (b[j]-'0') + hate;
            jogfol[k] = (sum%10+'0');
            hate = sum / 10;
            j++;
            k++;
        }

        //while (i <= lenA)
        //{
            //int sum = (a[lenA-1]-'0') + hate;
            //jogfol[k] = (sum%10+'0');
            //hate = sum / 10;
            //i++;
            //k++;
        //}
        strrev(jogfol);

        printf ("Sum of the int string is %s", jogfol);
    }

