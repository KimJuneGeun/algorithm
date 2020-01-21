#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int f=n;f>0;f--) {
        for(int j=0;j<n-f;j++) {
            printf(" ");
        }
        for(int i=0;i<f;i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}