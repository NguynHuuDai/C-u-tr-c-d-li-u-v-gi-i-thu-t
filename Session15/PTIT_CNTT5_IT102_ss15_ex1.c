//
// Created by hp on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int front;
    int rear;
    int maxSize;
} Queue;

Queue* createQueue(int maxSize) {
    Queue* q = (Queue*) malloc(sizeof(Queue));
    q->arr = (int*) malloc(maxSize * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->maxSize = maxSize;
    return q;
}

void printQueue(Queue* q) {
    if (q->rear < q->front) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue (front -> rear): ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

int main() {
    Queue* myQueue = createQueue(5);
    printQueue(myQueue);
    free(myQueue->arr);
    free(myQueue);
    return 0;
}