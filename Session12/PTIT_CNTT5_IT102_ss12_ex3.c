//
// Created by hp on 7/7/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

Node* insertHead(Node* head, int value) {
    Node* newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    return newNode;
}

Node* insertEnd(Node* head, int value) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)
        return newNode;
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

void print(Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL)
            printf("->");
        head = head->next;
    }
    printf("->NULL\n");
}

int main() {
    Node* head = NULL;
    head = insertHead(head, 1);
    head = insertHead(head, 2);
    head = insertHead(head, 3);
    head = insertHead(head, 4);
    head = insertHead(head, 5);
    int n;
    do
    {
       scanf("%d", &n);
    }while (n <= 0);


    head = insertEnd(head, n);
    print(head);
    return 0;
}