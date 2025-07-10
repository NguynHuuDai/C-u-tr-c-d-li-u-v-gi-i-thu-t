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

int isFull(Queue* q) {
    return q->rear == q->maxSize - 1;
}

void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        printf("queue is full\n");
        return;
    }
    q->rear++;
    q->arr[q->rear] = value;
}

void printQueue(Queue* q) {
    printf("queue = {\n");
    printf("   array = [");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d", q->arr[i]);
        if (i < q->rear) printf(", ");
    }
    printf("],\n");
    printf("   front = %d,\n", q->front);
    printf("   rear = %d,\n", q->rear);
    printf("   capacity = %d\n", q->maxSize);
    printf("},\n");
}

int main() {
    Queue* myQueue = createQueue(5);
    printQueue(myQueue);

    for (int i = 0; i < 5; i++) {
        int x;
        scanf("%d", &x);
        enqueue(myQueue, x);
        printQueue(myQueue);
    }

    // Thử thêm phần tử khi hàng đợi đã đầy
    int extra;
    scanf("%d", &extra);
    enqueue(myQueue, extra);

    free(myQueue->arr);
    free(myQueue);
    return 0;
}