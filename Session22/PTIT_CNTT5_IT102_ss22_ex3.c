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

void addToList(struct Node** head, int v) {
    struct Node* newNode = createNode(v);
    newNode->next = *head;
    *head = newNode;
}

void tradeMatric(int n, int matrix[100][100], struct Node* adjList[100]) {
    for (int i = 0; i < n; i++) {
        adjList[i] = NULL;
        for (int j = n - 1; j >= 0; j--) {
            if (matrix[i][j] == 1) {
                addToList(&adjList[i], j);
            }
        }
    }
}

void printAdjList(int n, struct Node* adjList[100]) {
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        struct Node* temp = adjList[i];
        while (temp != NULL) {
            printf(" %d ->", temp->vertex);
            temp = temp->next;
        }
        printf(" NULL\n");
    }
}

int main() {
    int n;
    int matrix[100][100];
    struct Node* adjList[100];

    do {
        printf("Nhap so dinh (0 < n < 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);

    printf("Nhap ma tran ke %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    tradeMatric(n, matrix, adjList);


    printAdjList(n, adjList);

    for (int i = 0; i < n; i++) {
        struct Node* current = adjList[i];
        while (current != NULL) {
            struct Node* toFree = current;
            current = current->next;
            free(toFree);
        }
    }

    return 0;
}
