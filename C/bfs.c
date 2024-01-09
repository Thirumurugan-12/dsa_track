#include<stdio.h>
#include<stdlib.h>

int visited[10],queue[10],front = -1,rear = -1,n;
int adj[10][10];

void bfs(int v) {
    for (int i = 1;i<=n;i++) {
        if (adj[v][i] && !visited[i]) {
            queue[++rear] = i;
        }
        if (front <= rear) {
            visited[queue[front]] = 1;
            bfs(queue[front++]);
        }
    }
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        queue[i] = 0;
        visited[i] = 0;
    }

    printf("Enter the graph data in matrix form:\n");
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            scanf("%d",&adj[i][j]);
        } 
    }
    int v;
    printf("Enter the starting vertex :");
    scanf("%d",&v);

    bfs(v);

    printf("The nodes which are reachable are: \n");
    for (int i=1;i<=n;i++) {
        printf("%d\t",i);
    }

    if (front > rear) {
        printf("BFS not possible . Not all nodes are reachable : \n");
    }

    return 0;
}