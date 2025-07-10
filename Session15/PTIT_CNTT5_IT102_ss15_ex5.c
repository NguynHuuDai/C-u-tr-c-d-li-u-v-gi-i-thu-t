//
// Created by hp on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *array;
    int front;
    int rear;
    int capacity;
} Queue;

Queue createQueue(int max) {
    Queue q;
    q.capacity = max;
    q.front = 0;
    q.rear = -1;
    q.array = (int*)malloc(sizeof(int) * max);
    if (q.array == NULL) {
        exit(1);
    }
    return q;
}

void addQueue(Queue *q, int value) {
    if (q->rear >= q->capacity - 1) {
        printf("full\n\n");
        return;
    }
    q->rear++;
    q->array[q->rear] = value;
}

int takeQueue(Queue *q) {
    if (q->rear < q->front) {
        printf("queue is empty\n");
        return -1;
    }
    int value = q->array[q->front];
    q->front++;
    return value;
}

void printQueue(Queue q) {
    printf("queue = {\n");
    printf("  array = [");
    for (int i = q.front; i <= q.rear; i++) {
        printf("%d", q.array[i]);
        if (i < q.rear) printf(", ");
    }
    printf("],\n");
    printf("  front = %d,\n", q.front);
    printf("  rear = %d,\n", q.rear);
    printf("  capacity = %d\n", q.capacity);
    printf("}\n");
}

int main() {
    Queue q = createQueue(5);
    addQueue(&q, 1);
    addQueue(&q, 2);
    addQueue(&q, 5);
    int temp = takeQueue(&q);
    if (temp != -1) {
        printf("return value = %d\n", temp);
    }
    printQueue(q);
    free(q.array);
    return 0;
}