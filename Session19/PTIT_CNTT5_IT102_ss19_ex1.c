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

int main() {
    int input;
    printf("Nhap so nguyen de tao node: ");
    scanf("%d", &input);

    Node* node = createNode(input);

    if (node != NULL) {
        printf("\nNode duoc tao:\n");
        printf("node = {\n");
        printf("   data: %d,\n", node->data);
        printf("   left -> %s,\n", node->left == NULL ? "NULL" : "...");
        printf("   right -> %s\n", node->right == NULL ? "NULL" : "...");
        printf("}\n");
    }

    free(node);

    return 0;
}
