//
// Created by hp on 7/23/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node *head = NULL;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Node* Adj[3];

Node* addAdj(int v, int u) {
    Node* newNode = createNode(u);
    newNode->next = Adj[v];
    Adj[v] = newNode;
}

void print() {
    for (int i = 0; i < 3; i++) {
        Node *temp = Adj[i];
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    printf("]\n");
}

int main() {
    for (int i = 0; i < 3; i++) {
        Adj[i] = NULL;
    }
    addAdj(1, 2);
    addAdj(2, 1);
    printf("[\n");
    print();
    addAdj(0, 1);
    addAdj(1, 0);
    printf("[\n");
    print();
    return 0;
}