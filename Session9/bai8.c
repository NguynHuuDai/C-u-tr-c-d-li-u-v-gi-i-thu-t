//
// Created by hp on 7/2/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

Node* deleteAtPosition(Node* head, int position) {
    if (head == NULL) {
        printf("Danh sach rong!\n");
        return NULL;
    }

    if (position == 0) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* current = head;
    int i = 0;

    while (current != NULL && i < position - 1) {
        current = current->next;
        i++;
    }

    if (current == NULL || current->next == NULL) {
        printf("Vi tri khong hop le!\n");
        return head;
    }

    Node* temp = current->next;
    current->next = temp->next;
    free(temp);

    return head;
}

int main() {

    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Danh sach ban dau:\n");
    printList(head);

    int position;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &position);

    head = deleteAtPosition(head, position);

    printf("Danh sach sau khi xoa:\n");
    printList(head);

    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
