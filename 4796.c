#include <stdio.h>
int main()
{
    int L, P, V;
    int cnt = 0, use;
    for (;;)
    {
        use = 0;
        scanf("%d %d %d", &L, &P, &V);
        if (L == 0 && P == 0 && V == 0)
        {
            break;
        }
        cnt++;
        while(1) {
            if(V<L) {
                use+=V;
                break;
            }
            V-=L;
            use+=L;
            V-=(P-L);
            if(V<=0) {
                break;
            }

        }
        printf("Case %d: %d\n",cnt, use);
    }
    return 0;
}

       