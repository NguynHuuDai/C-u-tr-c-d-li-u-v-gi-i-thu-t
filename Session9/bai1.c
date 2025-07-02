//
// Created by hp on 7/2/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *createNode(int data) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main(void) {
    Node* one = createNode(10);
    Node* two = createNode(20);
    Node* three = createNode(30);
    Node* four = createNode(40);
    Node* five = createNode(50);

    // lien ket
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    // two->next = NULL;

    printf("hello world\n");
    return 0;
}