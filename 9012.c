#include<stdio.h>
#include<string.h>


int main()
{
    char x[51];
    int t,len,cnt;
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        cnt=0;
        scanf(" %s",x);
        for(int j=0;j<strlen(x);j++) {
            if(x[j] == '(') {
                cnt++;
            }
            else {
                cnt--;
            }
        }   
        if(cnt == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}