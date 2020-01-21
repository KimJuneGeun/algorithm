#include<stdio.h>
#include<string.h>
int main()
{
    int count[26]={0,};
    char sen[101];
    scanf("%s",sen);
    for(int i=0;i<strlen(sen);i++) 
        count[sen[i]-'a']++;
    for(int i=0;i<26;i++) 
        printf("%d ",count[i]);
    return 0;
}