//
// Created by hp on 7/9/2025.
//
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

void push(struct Stack* stack, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}


int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}


int main() {
    struct Stack* stack = createStack();
    push(stack, 3);
    push(stack, 2);
    push(stack, 1);

    return 0;
}