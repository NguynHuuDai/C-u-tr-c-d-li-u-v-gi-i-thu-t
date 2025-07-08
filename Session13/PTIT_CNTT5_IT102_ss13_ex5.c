//
// Created by hp on 7/8/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int top;
    int cap;
} Stack;

Stack* createStack(int capacity) {
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    stack->cap = capacity;
    stack->top = -1;
    stack->arr = (int*)malloc(sizeof(int) * capacity);
    return stack;
}

int isFull(Stack *stack) {
    return stack->top == stack->cap - 1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, int value) {
    if (!isFull(stack)) {
        stack->arr[++stack->top] = value;
    }
}

int pop(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->arr[stack->top--];
    }
    return -1;
}

void reverseArray(int *a, int n) {
    Stack *stack = createStack(n);
    for (int i = 0; i < n; i++) {
        push(stack, a[i]);
    }
    for (int i = 0; i < n; i++) {
        a[i] = pop(stack);
    }
    free(stack->arr);
    free(stack);
}

void printArray(int *a, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int *a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Mang ban dau: ");
    printArray(a, n);

    reverseArray(a, n);

    printf("Mang sau khi dao nguoc: ");
    printArray(a, n);

    free(a);
    return 0;
}