#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int f=n;f>0;f--) {
        for(int i=0;i<f-1;i++) {
            printf(" ");
        }
        for(int j=0;j<n-f+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int f=0;f<n-1;f++) {
        for(int i=0;i<f+1;i++) {
            printf(" ");
        }
        for(int j=0;j<n-f-1;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}