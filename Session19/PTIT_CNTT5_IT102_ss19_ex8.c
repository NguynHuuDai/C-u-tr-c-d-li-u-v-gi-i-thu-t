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
int treeHeight(Node* root) {
    if (root == NULL)
        return 0;

    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int main() {

    Node* root = createNode(2);
    root->left = createNode(5);
    root->right = createNode(3);
    root->right->left = createNode(6);
    root->right->right = createNode(4);

    int height = treeHeight(root);
    printf("Chieu cao cua cay: %d\n", height);

    free(root->right->right);
    free(root->right->left);
    free(root->right);
    free(root->left);
    free(root);

    return 0;
}