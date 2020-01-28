#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int f=0;f<n;f++) {
        if(f!=n-1) {
            for(int i=0;i<n-f-1;i++) {
                printf(" ");
            }
            for(int j=0;j<f*2+1;j++) {
                if(j==0 || j == f*2) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }

        }
        else {
            for(int i=0;i<f*2+1;i++) {
                printf("*");
            }
        }
        printf("\n");
    }
}