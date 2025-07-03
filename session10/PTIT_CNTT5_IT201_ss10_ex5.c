//
// Created by hp on 7/3/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void deleteNodeByValue(Node** headRef, int value) {
    Node* temp = *headRef;
    Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        *headRef = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d-->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main(void) {
    Node* one = createNode(10);
    Node* two = createNode(20);
    Node* three = createNode(30);
    Node* four = createNode(40);
    Node* five = createNode(50);


    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;


    Node* head = one;

    printf("truoc khi xoa:\n");
    printList(head);

    int k;
    printf("phan tu muon xoa:\n");
    scanf("%d", &k);

    deleteNodeByValue(&head, k);
    printf("sau khi xoa node co gia tri %d:\n",k);
    printList(head);

    return 0;
}