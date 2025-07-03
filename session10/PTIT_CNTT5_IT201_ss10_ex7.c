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

void sortList(Node* head) {

    Node* i;
    Node* j;
    int temp;

    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}


void printList(Node* head) {
    while (head != NULL) {
        printf("%d-->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* one = createNode(10);
    Node* two = createNode(40);
    Node* three = createNode(30);
    Node* four = createNode(60);
    Node* five = createNode(50);



    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;


    Node* head = one;

    printf("lien ket ban dau:\n");
    printList(head);

    sortList(head);
    printf("sau khi sap xep:\n");
    printList(head);


    return 0;
}