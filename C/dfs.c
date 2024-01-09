#include <stdio.h>
#include<stdlib.h>

void DFS(int);
int G[10][10],visited[10],n;

int main() {
    int j;
    printf("Enter the number of verteices: ");
    scanf("%d",&n);

    printf("\n Enter the adjancency Matrix :\n");

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d",&G[i][j]);
        }
    }

    for (int i=0;i<n;i++) {
        visited[i] = 0;
    }

    DFS(0);

    return 0;

}

void DFS(int i) {
    printf("\n visited node --> %d",i);
    visited[i] = 1;

    for (int j=0;j<n;j++) {
        if (!visited[j] && G[i][j] == 1) {
            DFS(j);
        }
    }
}