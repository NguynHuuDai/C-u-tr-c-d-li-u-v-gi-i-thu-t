//
// Created by hp on 7/24/2025.
//
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int n, v;
    printf("Nhap so dinh va so canh: ");
    scanf("%d %d", &n, &v);

    if (n <= 0 || v <= 0 || n >= MAX || v >= MAX) {
        printf("Du lieu khong hop le!\n");
        return 1;
    }

    int graph[MAX][MAX] = {0};

    printf("Nhap cac canh:\n");
    int u, w;
    for (int i = 0; i < v; i++) {
        scanf("%d %d", &u, &w);
        if (u >= 0 && u < n && w >= 0 && w < n) {
            graph[u][w] = 1;
            graph[w][u] = 1;
        } else {
            printf("Canh khong hop le: %d %d\n", u, w);
            i--;
        }
    }

    int k;
    printf("Nhap dinh k muon kiem tra: ");
    scanf("%d", &k);

    if (k < 0 || k >= n) {
        printf("Dinh k khong hop le!\n");
        return 1;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (graph[k][i] == 1) {
            count++;
        }
    }

    printf("So dinh ke voi %d la: %d\n", k, count);

    return 0;
}
