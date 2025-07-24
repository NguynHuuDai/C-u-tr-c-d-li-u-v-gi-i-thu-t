//
// Created by hp on 7/24/2025.
//
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int vertex;
    struct Node* next;
};

struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

void addEdge(struct Node* adjList[], int u, int v) {
    struct Node* newNode = createNode(v);
    newNode->next = adjList[u];
    adjList[u] = newNode;

    newNode = createNode(u);
    newNode->next = adjList[v];
    adjList[v] = newNode;
}

void printAdjList(struct Node* adjList[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        struct Node* temp = adjList[i];
        while (temp != NULL) {
            printf(" %d", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Nhap so dinh: ");
    scanf("%d", &n);
    printf("Nhap so canh: ");
    scanf("%d", &m);

    struct Node* adjList[n];
    for (int i = 0; i < n; i++) {
        adjList[i] = NULL;
    }

    int u, v;
    for (int i = 0; i < m; i++) {
        printf("Nhap canh thu %d (u v): ", i + 1);
        scanf("%d %d", &u, &v);
        if (u >= 0 && u < n && v >= 0 && v < n) {
            addEdge(adjList, u, v);
        } else {
            printf("Canh khong hop le! Vui long nhap lai.\n");
            i--;
        }
    }

    printf("\nDanh sach ke:\n");
    printAdjList(adjList, n);

    return 0;
}
