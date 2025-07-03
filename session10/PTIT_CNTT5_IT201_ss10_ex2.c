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

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int main() {
    Node* one = createNode(1);
    Node* two = createNode(2);
    Node* three = createNode(3);
    Node* four = createNode(4);
    Node* five = createNode(5);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    Node* head = one;

    head = reverseList(head);

    int i = 0;
    while (head != NULL) {
        i++;
        printf("Node:%d\n", head->data);
        head = head->next;
    }

    free(five);
    free(four);
    free(three);
    free(two);
    free(one);

    return 0;
}
