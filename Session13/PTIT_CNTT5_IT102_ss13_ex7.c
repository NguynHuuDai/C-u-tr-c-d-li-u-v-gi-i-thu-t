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

int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int checkBrackets(char *s) {
    int len = strlen(s);
    Stack *stack = createStack(len);
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            push(stack, c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (isEmpty(stack) || !isMatching(pop(stack), c)) {
                free(stack->arr);
                free(stack);
                return 0;
            }
        }
    }
    int result = isEmpty(stack);
    free(stack->arr);
    free(stack);
    return result;
}

int main() {
    char s[100];
    printf("Nhap bieu thuc: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    if (checkBrackets(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}