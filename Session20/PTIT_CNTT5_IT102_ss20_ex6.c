//
// Created by hp on 7/22/2025.
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

int getHeight(Node* root, int target) {

    if (root == NULL) {
        return -1;
    }

    if (root->data == target) {
        int leftHeight = (root->left == NULL) ? 0 : 1 + getHeight(root->left, target);
        int rightHeight = (root->right == NULL) ? 0 : 1 + getHeight(root->right, target);
        return (leftHeight > rightHeight) ? leftHeight : rightHeight;
    }

    int leftHeight = getHeight(root->left, target);
    if (leftHeight != -1) {
        return 1 + leftHeight;
    }
    int rightHeight = getHeight(root->right, target);
    if (rightHeight != -1) {
        return 1 + rightHeight;
    }
    return -1;
}


Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4);
    root->left->left = createNode(5);
    root->right->right = createNode(6);

    int target ;
    printf("Nhap vao so can tim");
    scanf("%d", &target);
    getchar();
    int height = getHeight(root, target);
    if (height != -1) {
        printf("Do cao cua nut %d la: %d\n", target, height);
    } else {
        printf("Khong tim thay so %d\n", target);
    }
    return 0;
}