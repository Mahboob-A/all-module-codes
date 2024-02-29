#include <stdio.h>

void truncate(char s[], int n)
{
    s[n] = '\0';
}

int main()
{
    int n;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);
    int truncNo;
    scanf("%d", &truncNo);

    truncate(str, truncNo);
    printf("%s", str);
}
