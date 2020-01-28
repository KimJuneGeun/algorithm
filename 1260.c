#include<stdio.h>

int graph[1001][1001];
int dfs_visit[1001];
int bfs_visit[1001];
int queue[1001];


void DFS(int v, int n) {
    dfs_visit[v] = 1; //방문 체크
    printf("%d ",v); // 방문 한 곳 출력
    for(int i=1;i<=n;i++) { // 정점 갯수만큼 반복
        if(graph[v][i] == 1 && dfs_visit[i] == 0) { // 연결이 되어있으면서 방문하지 않은 곳을 방문
            DFS(i,n); //다시 깊이우선 탐색 시작.
        }
    }
    return;
}


int main()
{
    int n,m,s; //n: 정점 갯수  m: 간선 갯수 s: 시작 정점
    int v1,v2; // 정점의 좌표를 저장 할 변수 

    scanf("%d %d %d",&n,&m,&s);
    for(int i=0;i<m;i++) { // 그래프 구성
        scanf("%d %d",&v1,&v2);
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    DFS(s,n); // 깊이우선탐색 시작
    return 0;

}