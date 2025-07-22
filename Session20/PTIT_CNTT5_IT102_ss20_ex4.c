//
// Created by hp on 7/22/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) return NULL;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int countLeaves(Node *root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return countLeaves(root->left) + countLeaves(root->right);
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

    int leafCount = countLeaves(root);
    printf("number of leaves: %d\n", leafCount);

    return 0;
}
