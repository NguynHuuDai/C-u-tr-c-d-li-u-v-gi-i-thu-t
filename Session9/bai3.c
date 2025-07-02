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
int searchList(Node* head, int target) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == target) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

int main()
{
    Node* num1 = createNode(1);
    Node* num2 = createNode(2);
    Node* num3 = createNode(3);
    Node* num4 = createNode(4);
    Node* num5 = createNode(5);

    num1->next = num2;
    num2->next = num3;
    num3->next = num4;
    num4->next = num5;
    printList(num1);

    int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    if (searchList(num1, x)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}