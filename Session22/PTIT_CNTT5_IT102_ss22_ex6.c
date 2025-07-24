//
// Created by hp on 7/24/2025.
//
#include <stdio.h>

#define MAX 100

int graph[MAX][MAX];
int visited[MAX];

void DFS(int v, int n) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            DFS(i, n);
        }
    }
}

int main() {
    int v, e;
    printf("Nhap so dinh (v) va so canh (e): ");
    scanf("%d %d", &v, &e);

    if (v <= 0 || e <= 0 || v >= MAX || e >= MAX) {
        printf("Gia tri khong hop le!\n");
        return 1;
    }

    for (int i = 0; i < v; i++) {
        visited[i] = 0;
        for (int j = 0; j < v; j++) {
            graph[i][j] = 0;
        }
    }

    printf("Nhap danh sach %d canh (u v):\n", e);
    for (int i = 0; i < e; i++) {
        int u, w;
        scanf("%d %d", &u, &w);
        if (u >= 0 && u < v && w >= 0 && w < v) {
            graph[u][w] = 1;
            graph[w][u] = 1;
        } else {
            printf("Canh khong hop le. Vui long nhap lai.\n");
            i--;
        }
    }

    int start;
    printf("Nhap dinh bat dau DFS: ");
    scanf("%d", &start);

    if (start < 0 || start >= v) {
        printf("Dinh bat dau khong hop le!\n");
        return 1;
    }

    printf("Cac dinh duoc duyet theo DFS tu %d: ", start);
    DFS(start, v);
    printf("\n");

    return 0;
}
