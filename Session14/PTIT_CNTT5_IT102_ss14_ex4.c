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

int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

void push(struct Stack* stack, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Ngan xep trong\n");
        return -1;
    }
    struct Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}

void display(struct Stack* stack) {
    struct Node* temp = stack->top;
    printf("stack = {\n   ");
    if (isEmpty(stack)) {
        printf("NULL\n}\n");
        return;
    }

    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf("->");
        }
        temp = temp->next;
    }
    printf("->NULL\n}\n");
}

int main() {
    struct Stack* stack = createStack();

    push(stack, 5);
    push(stack, 4);
    push(stack, 3);
    push(stack, 2);
    push(stack, 1);

    display(stack);
    int val = pop(stack);
    if (val != -1) {
        printf("Gia tri lay ra: %d\n", val);
    }

    display(stack);
    while (!isEmpty(stack)) {
        val = pop(stack);
        if (val != -1) {
            printf("Gia tri lay ra: %d\n", val);
        }
    }
    pop(stack);
    display(stack);

    return 0;
}
