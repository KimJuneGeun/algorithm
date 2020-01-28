#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int f=n;f>0;f--) {
        for(int i=0;i<n-f+1;i++) {
            printf("*");
        }
        for(int j=0;j<f*2-2;j++) {
            printf(" ");
        }
        for(int k=0;k<n-f+1;k++) {
            printf("*");
        }
        printf("\n");
    }
    for(int f=0;f<n-1;f++) {
        for(int i=0;i<n-f-1;i++) {
            printf("*");
        }
        for(int j=0;j<f*2+2;j++) {
            printf(" ");
        }
        for(int k=0;k<n-f-1;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}