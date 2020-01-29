#include<stdio.h>
int main()
{
    int t,n;
    int tri[50];
    for(int i=1;i<=44;i++) {
        tri[i]=0;
        for(int j=1;j<=i;j++) {
            tri[i]+=j;
        }
    }
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        int chk = 0;
        scanf("%d",&n);
        for(int x=1;x<=44;x++) {
            for(int y=1;y<=44;y++) {
              for(int z=1;z<=44;z++) {
                    if(n == tri[x]+tri[y]+tri[z]) {
                        chk=1;
                        x=44;y=44;z=44;
                    }
                }
            }
        }
        if(chk==0) printf("0\n");
        else printf("1\n");
    }
    

    return 0;
}