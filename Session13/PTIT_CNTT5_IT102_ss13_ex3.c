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

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("No element in stack\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int push(Stack *stack, int value) {
    if (stack->top == stack->cap - 1) return 0;
    stack->arr[++stack->top] = value;
    return 1;
}

void printStack(Stack *stack) {
    printf("stack={\n");
    printf("  elements: [");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d", stack->arr[i]);
        if (i < stack->top) printf(", ");
    }
    printf("],\n");
    printf("  top: %d,\n", stack->top);
    printf("  cap: %d\n", stack->cap);
    printf("}\n");
}

int main() {
    Stack *myStack = createStack(5);
    push(myStack, 10);
    push(myStack, 20);
    push(myStack, 30);
    push(myStack, 40);
    push(myStack, 50);
    printStack(myStack);

    int value = pop(myStack);
    printf("Output: %d\n", value);
    printStack(myStack);

    Stack *emptyStack = createStack(5);
    value = pop(emptyStack);
    printf("Output: %d\n", value);
    printStack(emptyStack);

    free(myStack->arr);
    free(myStack);
    free(emptyStack->arr);
    free(emptyStack);
    return 0;
}