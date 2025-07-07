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

void findMiddle(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    int midIndex = count / 2;
    temp = head;
    int index = 0;
    while (index < midIndex) {
        temp = temp->next;
        index++;
    }
    printf("Node %d: %d\n", midIndex + 1, temp->data);
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf("<->");
        temp = temp->next;
    }
    printf("->NULL\n");
}

int main() {
    Node* head = NULL;

    prepend(&head, 1);
    prepend(&head, 2);
    prepend(&head, 3);
    prepend(&head, 4);
    prepend(&head, 5);

    printList(head);
    findMiddle(head);

    prepend(&head, 6);

    printList(head);
    findMiddle(head);

    return 0;
}
