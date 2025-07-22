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
} Node;

Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) return NULL;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preorder(Node *root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(Node *root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

void levelOrder(Node *root) {
    if (root == NULL) return;

    Node *queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        Node *current = queue[front++];
        printf("%d ", current->data);
        if (current->left != NULL)
            queue[rear++] = current->left;
        if (current->right != NULL)
            queue[rear++] = current->right;
    }
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

    printf("Pre-order : ");
    preorder(root);
    printf("\n");

    printf("In-order : ");
    inorder(root);
    printf("\n");

    printf("Post-order : ");
    postorder(root);
    printf("\n");

    printf("Level-order: ");
    levelOrder(root);
    printf("\n");

    return 0;
}
