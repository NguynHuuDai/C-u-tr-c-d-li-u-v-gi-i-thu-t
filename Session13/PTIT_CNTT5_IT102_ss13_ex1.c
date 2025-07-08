//
// Created by hp on 7/8/2025.
//

#include <stdio.h>
#define MAX 100

typedef  struct {
    int data[MAX];
    int top;
} Stack ;

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
        printf("Kich thuoc da toi da\n");
    }else {
        s->data[++s->top]=x;
    }
}

int main() {
    Stack s;
    initStack(&s);
    push(&s, 6);
    push(&s, 2);
    push(&s, 5);
    push(&s, 20);
    push(&s, 7);
}