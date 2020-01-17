#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,t;
    char s[5];
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf(" %s",s);
        a = s[0] - '0';
        b = s[2] - '0';
        printf("%d\n",a+b);
    }
    return 0;
}