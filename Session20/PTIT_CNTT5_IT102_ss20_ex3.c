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

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// add phan tu
void addValue(Node* root, int value) {
    if (root == NULL) return;

    if (root->data == 4 && root->right == NULL) {
        root->right = createNode(value);
        return;
    }

    addValue(root->left, value);
    addValue(root->right, value);
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4);
    root->left->left = createNode(5);

    printf("cay truoc khi them (inorder traversal): ");
    inorderTraversal(root);
    printf("\n");
    int n;
    printf("Nhap so muon them: ");
    scanf("%d", &n);
    addValue(root, n);

    printf("Tree after adding %d (inorder traversal): ",n);
    inorderTraversal(root);
    printf("\n");
    return 0;
}