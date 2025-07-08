//
// Created by hp on 7/8/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *arr;
    int top;
    int cap;
} Stack;

Stack* createStack(int capacity) {
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    stack->cap = capacity;
    stack->top = -1;
    stack->arr = (char*)malloc(sizeof(char) * capacity);
    return stack;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, char c) {
    if (stack->top < stack->cap - 1) {
        stack->arr[++stack->top] = c;
    }
}

char pop(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->arr[stack->top--];
    }
    return '\0';
}

int isSymmetric(char *s) {
    int len = strlen(s);
    Stack *stack = createStack(len);
    for (int i = 0; i < len; i++) {
        push(stack, s[i]);
    }
    for (int i = 0; i < len; i++) {
        if (s[i] != pop(stack)) {
            free(stack->arr);
            free(stack);
            return 0;
        }
    }
    free(stack->arr);
    free(stack);
    return 1;
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isSymmetric(str)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}