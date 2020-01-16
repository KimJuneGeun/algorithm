#include <stdio.h>
#define MAX 51

int main()
{
    int n;
    int count, maxcount = -1;
    char cmap[MAX][MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %c", &cmap[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    { //가로
        for (int j = 0; j < n - 1; j++)
        {
            if (cmap[i][j] != cmap[i][j + 1])
            {
                char tmp = cmap[i][j];
                cmap[i][j] = cmap[i][j + 1];
                cmap[i][j + 1] = tmp;
                for(int x=0;x<n;x++) {
                    count = 0;
                    for(int y=0;y<n-1;y++) {
                        if(cmap[x][y] == cmap[x][y+1]) count++;
                    }
                    if(count > maxcount) maxcount = count;
                }
                for(int y=0;y<n;y++) {
                    count = 0;
                    for(int x=0;x<n-1;x++) {
                        if(cmap[x][y] == cmap[x+1][y]) count++;
                    }
                    if(count > maxcount) maxcount = count;
                }
                tmp = cmap[i][j];
                cmap[i][j] = cmap[i][j + 1];
                cmap[i][j + 1] = tmp;

                
            }
            if(cmap[j][i] != cmap[j+1][i])
            {
                char tmp = cmap [j][i];
                cmap[j][i] = cmap[j+1][i];
                cmap[j+1][i] = tmp;
                for(int x=0;x<n;x++) {
                    count = 0;
                    for(int y=0;y<n-1;y++) {
                        if(cmap[x][y] == cmap[x][y+1]) count++;
                    }
                    if(count > maxcount) maxcount = count;
                }
                for(int y=0;y<n;y++) {
                    count = 0;
                    for(int x=0;x<n-1;x++) {
                        if(cmap[x][y] == cmap[x+1][y]) count++;
                    }
                    if(count > maxcount) maxcount = count;
                }
                tmp = cmap[j][i];
                cmap[j][i] = cmap[j+1][i];
                cmap[j+1][i] = tmp;

            }
        }
    }
    
    printf("%d\n", maxcount+1);
    return 0;
}
