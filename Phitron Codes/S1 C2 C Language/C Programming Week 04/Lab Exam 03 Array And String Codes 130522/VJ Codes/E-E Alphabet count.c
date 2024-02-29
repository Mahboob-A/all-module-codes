
 #include <stdio.h>
 #include <string.h>
 int main()
 {
    char str[1001];
    gets (str);
    int alphbt = 0;
    int i;

    //int len = strlen(str);
    //strlwr(str);

    for (int i=0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z')  || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphbt++;
        }

    }
    for (int i=0; str[i] != '\0'; i++) {
        if (str[i] == alphbt) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }

    //printf("%d", alphbt);

    return 0;
 }


 /*

      for (int i=0; i<len;   i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
     }



    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z')  || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphbt++;
            i++;
        }
    }


     if (alphbt == 26) {
        printf("YES");
    }
    else {
        printf("NO");
    }
     */

