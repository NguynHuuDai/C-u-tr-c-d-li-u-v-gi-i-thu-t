//
// Created by hp on 7/14/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = NULL;
    q->rear = NULL;
    return q;
}

Node* createNode() {
    int x;
    printf("Nhap so nguyen: ");
    scanf("%d", &x);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void enqueue(Queue* q) {
    Node* newNode = createNode();
    if (q->rear == NULL) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int peekFront(Queue* q) {
    if (q->front == NULL) {
        printf("empty queue\n");
        return -1;
    } else {
        return q->front->data;
    }
}

void printQueue(Queue* q) {
    Node* temp = q->front;
    printf("front->");
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    printf("rear->");
    if (q->rear != NULL)
        printf("%d->NULL\n", q->rear->data);
    else
        printf("NULL\n");
}

int main() {
    Queue* q = createQueue();

    int value = peekFront(q);
    if (value != -1) {
        printf("%d\n", value);
    }

    enqueue(q);
    enqueue(q);
    enqueue(q);
    printQueue(q);

    value = peekFront(q);
    if (value != -1) {
        printf("%d\n", value);
    }

    return 0;
}
