
  /*      // Find the lexicographically smallest string from a list of strings

    #include<stdio.h>
    #include<string.h>

    int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    char ans[100]="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";

    for(int i=0;i<n;i++)
    {
        scanf("%s",&str);
        if(strcmp(str,ans)==-1)
        {
            strcpy(ans,str);
        }
    }
    printf("lexicographically smallest string is: %s\n",ans);
}


*/

    /// warning : code has bug to fix


    #include <stdio.h>
    #include <string.h>
    int main () {
        char str[100];
        char ans[100] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"; // 30 z
        int i, n;
        scanf("%d", &n); // number of strings

        for (i=0; i<n; i++) {

            scanf("%s", &str);

            if (strcmp(str,ans)==-1) {

                strcpy(ans,str);
            }
        }

        printf("The smallest sting is: %s", ans);
    }



