//
// Created by hp on 7/8/2025.
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

void sort(Node* head) {
    if (head == NULL) return;
    int count;
    Node* ptr1;
    Node* lptr = NULL;
    do {
        count = 0;
        ptr1 = head;
        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                // Hoán đổi dữ liệu
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                count = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (count);
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
    head = insertHead(head, 6);
    head = insertHead(head, 8);
    sort(head);
    print(head);
    return 0;
}