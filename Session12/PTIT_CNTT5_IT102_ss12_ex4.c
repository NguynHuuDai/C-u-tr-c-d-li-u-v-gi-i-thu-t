//
// Created by hp on 7/7/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct
Node{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;
Node* insertAtHead(int data, Node* head)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    return newNode;
}
void printList(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;

    }

}
void removeAtTail(Node* head)
{
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* del = temp;
    Node* prev = temp->prev;
    prev->next = NULL;
    del->prev = NULL;
    free(del);

}
int main()
{
    Node* head= NULL;
    head= insertAtHead(1, head);
    head= insertAtHead(2, head);
    head= insertAtHead(3, head);
    head= insertAtHead(4, head);

    printList(head);
    removeAtTail(head);
    printf("\n");
    printList(head);
    return 0;
}