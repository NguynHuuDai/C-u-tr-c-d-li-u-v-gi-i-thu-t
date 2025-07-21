//
// Created by hp on 7/21/2025.
//

#include <stdio.h>
#include <stdlib.h>

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

void preorderTraversal(Node* root) {
    if (root == NULL) return;
    printf("%d\n", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {

    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(5);
    root->right->left = createNode(4);

    printf("Duyet cay theo tien thu tu:\n");
    preorderTraversal(root);

    free(root->right->left);
    free(root->right);
    free(root->left);
    free(root);

    return 0;
}