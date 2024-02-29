
// contest of job placement group 
// https://www.hackerrank.com/contests/fly-to-your-dream-contest/challenges
// contest date: 080123, Sunday 
// today 090123, Monday 

#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int cnt[26]={0};
    char all[101];
    int x=0;
    for(int i=0;i<strlen(s);i++)
    {
        cnt[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]>0)
        {
            all[x++]=(char)(i+97);
        }
    }
    all[x]='\0';
    for(int i=0;i<strlen(all);i++)
    {
        for(int j=i+1;j<strlen(all);j++)
        {
            if(cnt[all[i]-'a'] < cnt[all[j]-'a'])
            {
                char t=all[i];
                all[i]=all[j];
                all[j]=t;
            }
            if(cnt[all[i]-'a'] == cnt[all[j]-'a'] && all[i]>all[j])
            {
                char t=all[i];
                all[i]=all[j];
                all[j]=t;
            }
        }
    }
    for(int i=0;i<strlen(all);i++)
    {
        for(int j=0;j<cnt[all[i]-'a'];j++) printf("%c",all[i]);
    }
    return 0;
}