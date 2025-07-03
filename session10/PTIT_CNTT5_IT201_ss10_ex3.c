//
// Created by hp on 7/3/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Không thể cấp phát bộ nhớ\n");
        exit(1);
    }
    newNode->data = value;
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

void addToEnd(Node** head, int value) {
    Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

int main() {
    Node* head = createNode(5);
    head->next = createNode(4);
    head->next->next = createNode(3);
    head->next->next->next = createNode(2);
    head->next->next->next->next = createNode(1);

    printf("Danh sach ban dau:\n");
    printList(head);

    int newValue;
    do
    {
        printf("Nhap vao so muon them vao danh sach: ");
        scanf("%d", &newValue);

        if (newValue > 0) {
            addToEnd(&head, newValue);
        } else {
            printf("Chi duoc nhap so nguyen duong\n");
        }
    }while (newValue < 0);


    printf("Danh sach moi sau khi them:\n");
    printList(head);

    return 0;
}