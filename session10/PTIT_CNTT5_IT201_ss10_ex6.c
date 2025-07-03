//
// Created by hp on 7/3/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printMiddleNode(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    int middlePos = (count / 2) + 1;

    temp = head;
    int i = 1;
    while (i < middlePos) {
        temp = temp->next;
        i++;
    }

    printf("Node %d: %d\n", middlePos, temp->data);
}

int main() {
    // Tạo các node
    Node* one = createNode(5);
    Node* two = createNode(4);
    Node* three = createNode(3);
    Node* four = createNode(2);
    Node* five = createNode(1);
    Node* six = createNode(6);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;


    Node* head = one;

    printf("Danh sach lien ket:\n");
    printList(head);

    printf("Phan tu nam giua:\n");
    printMiddleNode(head);

    free(six);
    free(five);
    free(four);
    free(three);
    free(two);
    free(one);

    return 0;
}