#include<stdio.h>
int main()
{
    int N;
    int cre, tmp, chk=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        cre = tmp = i;
        while(tmp !=0) {
            cre += tmp%10;
            tmp /= 10;
        }
        if(cre == N) {          
           printf("%d\n",i);
           chk=1;
           break;

        }
    }
    if(chk == 0) printf("0\n");
    return 0;
}