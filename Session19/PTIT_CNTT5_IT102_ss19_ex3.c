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

void postorderTraversal(Node* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d\n", root->data);
}

int main() {


    Node* root = createNode(2);
    root->left = createNode(5);
    root->right = createNode(3);
    root->right->right = createNode(4);

    printf("Duyệt cây theo hậu thứ tự:\n");
    postorderTraversal(root);

    free(root->right->right);
    free(root->right);
    free(root->left);
    free(root);

    return 0;
}