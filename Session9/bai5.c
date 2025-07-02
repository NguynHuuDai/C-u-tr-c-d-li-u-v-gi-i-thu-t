//
// Created by hp on 7/2/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* createNode(int data) {
    Node* newNode = malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

Node* addFirst(Node* head, int x) {
    Node* newNode = createNode(x);
    newNode->next = head;
    return newNode;
}

int main() {

    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    printf("Danh sach ban dau:\n");
    printList(head);

    int x;
    printf("Nhap gia tri muon them vao dau: ");
    scanf("%d", &x);

    head = addFirst(head, x);

    printf("Danh sach sau khi them:\n");
    printList(head);

    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}