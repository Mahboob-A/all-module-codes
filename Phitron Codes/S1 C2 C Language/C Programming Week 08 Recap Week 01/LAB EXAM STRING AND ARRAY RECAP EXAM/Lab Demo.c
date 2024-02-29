   #include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s", &str);
    int count = 0;
    int freq[26] = {0};
    int length = strlen(str);
    for(int i=1; i<=length; i++){
       if(str[i]<='Z' && str[i]>='A') {
           freq[str[i]-'A'] += 1;
       }
    }
    for(int i=0; i<26; i++){
        count +=freq[i];
    }
        for(int i=0; i<length; i++){
            if(count == length -1){
            if(str[i]<='z' && str[i]>='a'){
                str[i] = str[i] - 32;
            }
            else{
                str[i] = str[i] + 32;
            }
        }

    }
        printf("%s", str);

}
