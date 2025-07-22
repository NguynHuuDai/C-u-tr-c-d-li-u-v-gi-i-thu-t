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
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void deleteNode(Node *root, int value) {


    Node *queue[100];
    int front = 0, rear = 0;
    Node *target = NULL;
    Node *deepest = NULL;
    Node *parentOfDeepest = NULL;

    queue[rear++] = root;

    while (front < rear) {
        Node *current = queue[front++];

        if (current->data == value)
            target = current;

        if (current->left) {
            parentOfDeepest = current;
            queue[rear++] = current->left;
        }
        if (current->right) {
            parentOfDeepest = current;
            queue[rear++] = current->right;
        }

        deepest = current;
    }

    if (target == NULL) {
        printf("Khong tim thay gia tri\n");
        return;
    }

    if (deepest != NULL)
        target->data = deepest->data;

    if (parentOfDeepest != NULL) {
        if (parentOfDeepest->right == deepest) {
            free(parentOfDeepest->right);
            parentOfDeepest->right = NULL;
        } else if (parentOfDeepest->left == deepest) {
            free(parentOfDeepest->left);
            parentOfDeepest->left = NULL;
        }
    } else {
        free(root);
        root = NULL;
    }
}

void levelOrder(Node *root) {
    if (root == NULL) return;

    Node *queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        Node *current = queue[front++];
        printf("%d ", current->data);
        if (current->left)
            queue[rear++] = current->left;
        if (current->right)
            queue[rear++] = current->right;
    }
    printf("\n");
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

    printf("Truoc khi xoa:\n");
    levelOrder(root);

    deleteNode(root, 3);

    printf("Sau khi xoa:\n");
    levelOrder(root);

    return 0;
}
