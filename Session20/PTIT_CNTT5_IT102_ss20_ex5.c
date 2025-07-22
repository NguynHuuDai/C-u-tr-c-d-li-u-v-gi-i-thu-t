//
// Created by hp on 7/22/2025.
//
#include <stdio.h>
#include <stdlib.h>

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
}
int findMaxValue(Node* root) {

    if (root == NULL) {
        return INT_MIN;
    }
    int max = root->data;
    int leftMax = findMaxValue(root->left);
    int rightMax = findMaxValue(root->right);

    if (leftMax > max) max = leftMax;
    if (rightMax > max) max = rightMax;

    return max;
}

int main() {
    Node *root = createNode(1);
    Node *left1 = createNode(8);
    Node *right1 = createNode(6);
    Node *left2 = createNode(7);
    Node *right2 = createNode(5);

    root->left = left1;
    root->right = right1;
    left1->left = left2;
    right1->right = right2;

    int max = findMaxValue(root);
    printf("so lon nhat la: %d", max);
    return 0;
}
