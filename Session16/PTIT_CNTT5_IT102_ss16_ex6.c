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

void dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("queue is empty\n");
        return;
    }
    Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
}

int peekFront(Queue* q) {
    if (q->front == NULL) {
        printf("empty queue\n");
        return -1;
    } else {
        return q->front->data;
    }
}

void displayQueue(Queue* q) {
    if (q->front == NULL) {
        printf("queue is empty\n");
        return;
    }
    Node* temp = q->front;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    Queue* q = createQueue();

    displayQueue(q);

    enqueue(q);
    enqueue(q);
    enqueue(q);

    displayQueue(q);

    return 0;
}
