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
    q.array = (int *)malloc(sizeof(int) * max);
    if (q.array == NULL) exit(1);
    return q;
}

void enQueue(Queue *q, int value) {
    if (q->rear >= q->capacity - 1) {
        printf("Queue is full\n");
        return;
    }
    q->rear++;
    q->array[q->rear] = value;
}

int increase(Queue q) {
    for (int i = q.front; i < q.rear; i++) {
        if (q.array[i + 1] - q.array[i] != 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so phan tu ");
    scanf("%d", &n);
    Queue q = createQueue(n);
    printf("Nhap %d so nguyen duong:\n", n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        enQueue(&q, x);
    }
    if (increase(q)) {
        printf("True.\n");
    } else {
        printf("False.\n");
    }
    free(q.array);
    return 0;
}