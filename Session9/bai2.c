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

int main() {
    Node* one = createNode(1);
    Node* two = createNode(2);
    Node* three = createNode(3);
    Node* four = createNode(4);
    Node* five = createNode(5);

    // lien ket
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;


    Node* head= one;
    int i = 0;
    while (head != NULL)
    {
        i++;
        printf("Node %d: %d\n",i, head->data);
        head = head->next;
    }
    printf("\n");

    free(one);
    free(two);
    free(three);
    free(four);
    free(five);

    return 0;
}