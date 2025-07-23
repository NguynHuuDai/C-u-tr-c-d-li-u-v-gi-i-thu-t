//
// Created by hp on 7/23/2025.
//
#include <stdio.h>

#define MAX 4

void initGraph(int graph[MAX][MAX]) {
    int i, j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            graph[i][j] = 0;
        }
    }
}

void addEdge(int graph[MAX][MAX], int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void displayGraph(int graph[MAX][MAX]) {
    printf("[\n");
    int i, j;
    for (i = 0; i < MAX; i++) {
        printf(" ");
        for (j = 0; j < MAX; j++) {
            printf("%2d", graph[i][j]);
            if (j < MAX - 1) printf(", ");
        }
        printf("\n");
    }
    printf("]\n");
}

int main() {
    int graph[MAX][MAX];

    initGraph(graph);
    displayGraph(graph);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    displayGraph(graph);

    return 0;
}
