//
// Created by hp on 7/8/2025.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int x) {
    if (isFull(s)) {
        printf("Stack is full\n");
    } else {
        s->data[++s->top] = x;
    }
}

void printStack(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("elements: ");
        for (int i = s->top; i >= 0; i--) {
            printf("%d ", s->data[i]);
        }
    }
}

int main() {
    int arr[5];
    printf("nhap 5 phan tu\n");
    for (int i = 0; i < 5; i++) {
        int n;
        scanf("%d", &n);
        arr[i] = n;
    }
    Stack s;
    initStack(&s);
    for (int i = 0; i < 5; i++) {
        push(&s, arr[i]);
    }
    printStack(&s);
}