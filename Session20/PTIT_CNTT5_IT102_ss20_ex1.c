//
// Created by hp on 7/22/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    Node *root = createNode(1);
    Node *left1 = createNode(2);
    Node *right1 = createNode(3);
    Node *left2 = createNode(4);
    Node *right2 = createNode(5);

    root->left = left1;
    root->right = right1;
    left1->left = left2;
    right1->right = right2;

    return 0;
}
