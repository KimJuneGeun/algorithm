#include<stdio.h>
int graph[1001][1001];
int dfs_visit[1001];
int chk[1001];

void DFS(int v, int n) {
    dfs_visit[v] = 1;
    for(int i=1;i<=n;i++) {
        if(dfs_visit[i] == 0 && graph[v][i] == 1) {
            DFS(i,n);
        }
    }
    return;
}

int main()
{
    int n, m, res=0;
    int v1, v2;
    int start = 1;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++) {
        scanf("%d %d",&v1, &v2);
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    for(int i=1;i<=n;i++) {
        if(dfs_visit[i] == 0) {
            DFS(i,n);
            res++;
        }
    }
    printf("%d\n",res);
    return 0;
}