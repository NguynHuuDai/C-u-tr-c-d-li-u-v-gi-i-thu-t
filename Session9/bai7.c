//
// Created by hp on 7/2/2025.
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Tạo node mới
Node *createNode(int data) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// In danh sách liên kết
void printList(Node *head) {
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Thêm node vào vị trí bất kỳ
void insertAtPosition(Node **headRef, int value, int position) {
    Node *newNode = createNode(value);

    // Chèn đầu danh sách
    if (position == 0) {
        newNode->next = *headRef;
        *headRef = newNode;
        return;
    }

    Node *current = *headRef;
    int i = 0;

    // Duyệt đến vị trí trước vị trí muốn chèn
    while (current != NULL && i < position - 1) {
        current = current->next;
        i++;
    }

    // Nếu vị trí không hợp lệ (vượt quá độ dài danh sách)
    if (current == NULL) {
        printf("Vi tri khong hop le!\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

int main() {
    // Danh sách ban đầu: 1->2->3->4->5
    Node *one = createNode(1);
    Node *two = createNode(2);
    Node *three = createNode(3);
    Node *four = createNode(4);
    Node *five = createNode(5);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    Node *head = one;

    printf("Danh sach ban dau:\n");
    printList(head);

    int value, position;
    printf("Nhap gia tri: ");
    scanf("%d", &value);
    printf("Nhap vi tri: ");
    scanf("%d", &position);

    insertAtPosition(&head, value, position);

    printf("Danh sach sau khi chen:\n");
    printList(head);

    // Giải phóng bộ nhớ
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
