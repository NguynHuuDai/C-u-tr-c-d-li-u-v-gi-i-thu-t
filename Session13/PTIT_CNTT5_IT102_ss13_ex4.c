//
// Created by hp on 7/8/2025.
//

#include <stdio.h>
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

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("No element in stack\n");
        return -1;
    }
    return s->data[s->top--];
}

int top(Stack* s) {
    if (isEmpty(s)) {
        printf("No element in stack\n");
        return -1;
    }
    return s->data[s->top];
}

void printStack(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        for (int i = s->top; i >= 0; i--) {
            printf("%d\n", s->data[i]);
        }
    }
}

int main() {
    Stack s;
    initStack(&s);
    push(&s, 4);
    push(&s, 6);
    push(&s, 8);
    push(&s, 10);
    push(&s, 12);
    printStack(&s);
}