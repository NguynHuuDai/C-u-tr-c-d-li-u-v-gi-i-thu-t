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

    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void prepend(Node** head, int value) {
    Node* newNode = createNode(value);
    newNode->next = *head;
    if (*head != NULL)
        (*head)->prev = newNode;
    *head = newNode;
}

void printReverse(Node* head) {
    if (head == NULL) return;

    Node* tail = head;
    while (tail->next != NULL)
        tail = tail->next;

    while (tail != NULL) {
        printf("data: %d\n", tail->data);
        tail = tail->prev;
    }
}

int main() {
    Node* head = NULL;

    prepend(&head, 1);
    prepend(&head, 2);
    prepend(&head, 3);
    prepend(&head, 4);
    prepend(&head, 5);

    printReverse(head);

    return 0;
}
