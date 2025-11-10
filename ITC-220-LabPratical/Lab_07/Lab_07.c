#include <stdio.h>
#include <stdlib.h>
#define N 9
int graph[N+1][N+1]; 
int visited[N+1];

void addEdge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}
void bfs(int start) {
    int q[20], front = 0, rear = 0;
    int i, node;
    for(i=1;i<=N;i++)
        visited[i] = 0;
    q[rear++] = start;
    visited[start] = 1;
    printf("BFS order: ");
    while(front < rear) {
        node = q[front++];
        printf("%d ", node);
        for(i=1;i<=N;i++) {
            if(graph[node][i] && !visited[i]) {
                visited[i] = 1;
                q[rear++] = i;
            }
        }
    }
    printf("\n");
}
void dfs(int node) {
    int i;
    visited[node] = 1;
    printf("%d ", node);
    for(i=N;i>=1;i--) {  
        if(graph[node][i] && !visited[i]) {
            dfs(i);
        }
    }
}
int main() {
    int i,j,node;
    int num[3][3];
    int count=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            num[i][j]=count++;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            int u = num[i][j];
            if(i>0) addEdge(u, num[i-1][j]);
            if(i<2) addEdge(u, num[i+1][j]);
            if(j>0) addEdge(u, num[i][j-1]);
            if(j<2) addEdge(u, num[i][j+1]);
        }
    }
    printf("Graph traversal starting from node 1:\n");
    bfs(1);
    for(i=1;i<=N;i++)
        visited[i]=0;
    printf("DFS order: ");
    dfs(1);
    printf("\n");
    return 0;
}