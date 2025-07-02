//
// Created by hp on 7/2/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;

}Node;
Node* createNode(int data) {
        Node* newNode = malloc(sizeof(Node));

        newNode->data = data;
        newNode->next = NULL;
        return newNode;
}

void printList(Node* head)
{
    Node* current = head;
    while (current != NULL)
    {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
Node* deleteNode(Node* head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node* current = head;
    head = head->next;
    free(current);
    return head;
}

int main()
{
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    printList(head);
    head = deleteNode(head);
    printList(head);

    return 0;
}