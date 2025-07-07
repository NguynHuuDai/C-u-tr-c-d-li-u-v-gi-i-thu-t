//
// Created by hp on 7/7/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Không thể cấp phát bộ nhớ.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void append(Node** head, int value) {
    Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void printList(Node* head) {
    Node* temp = head;
    printf("Danh sach lien ket doi: ");
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" <-> ");
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    int n, value;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &value);
        append(&head, value);
    }

    printList(head);

    return 0;
}
