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

Node* delete(Node* head, int value) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            Node* toDelete = current;
            //phần tử đầu
            if (current->prev == NULL) {
                head = current->next;
                if (head != NULL)
                    head->prev = NULL;
            }
            //phần tử giữa hoặc cuối
            else {
                current->prev->next = current->next;
                if (current->next != NULL)
                    current->next->prev = current->prev;
            }
            current = current->next;
            free(toDelete);
        } else {
            current = current->next;
        }
    }
    return head;
}

void print(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;
    head = insertHead(head, 5);
    head = insertHead(head, 4);
    head = insertHead(head, 3);
    head = insertHead(head, 2);
    head = insertHead(head, 1);
    print(head);
    int x;
    scanf("%d", &x);
    head = delete(head, x);
    print(head);
    return 0;
}