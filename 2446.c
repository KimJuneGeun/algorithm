#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int f=0;f<n;f++) {
        for(int i=0;i<f;i++) {
            printf(" ");
        }
        for(int j=0;j<(n-f)*2-1;j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int f=1;f<n;f++) {
        for(int i=0;i<n-f-1;i++) {
            printf(" ");
        }
        for(int j=0;j<f*2+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}