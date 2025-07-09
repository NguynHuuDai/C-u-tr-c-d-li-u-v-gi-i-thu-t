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

int pop(struct Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    struct Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}

int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

void traverseStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Ngan xep trong\n");
        return;
    }

    while (!isEmpty(stack)) {
        int data = pop(stack);
        printf("%d\n", data);
    }
}

int main() {
    struct Stack* stack = createStack();

    push(stack, 5);
    push(stack, 4);
    push(stack, 3);
    push(stack, 2);
    push(stack, 1);

    traverseStack(stack);
    traverseStack(stack);

    return 0;
}