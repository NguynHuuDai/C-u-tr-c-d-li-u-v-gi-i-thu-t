//
// Created by hp on 7/21/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bool dfsSearch(Node* root, int target) {
    if (root == NULL) return false;
    if (root->data == target) return true;
    return dfsSearch(root->left, target) || dfsSearch(root->right, target);
}

int main() {

    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4);
    root->left->left = createNode(5);

    int x = 5;
    if (dfsSearch(root, x))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}