#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int f=0;f<n;f++) {
        for(int i=0;i<n-f-1;i++) {
            printf(" ");
        }
        for(int j=1;j<=f*2+1;j++) {
            if(j%2==0) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
}