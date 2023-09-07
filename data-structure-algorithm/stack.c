#include <stdio.h>

#define STACK_MAX 100

typedef struct stack {
    int top;
    int data[STACK_MAX];
} Stack;


void push(Stack *s, int item) {
    if(s->top < STACK_MAX) {
        s->data[s->top] = item;
        s->top = s->top + 1;
    } else {
        printf("Stack is full!");
    }
}

int pop(Stack *s) {
    int item = -1;

    if(s->top > 0) {
        s->top = s->top - 1;
        item = s->data[s->top];
    } else {
        printf("Stack is empty!");
    }

    return item;
}


int main()
{

    Stack arr;
    arr.top = 0;
    int item;

    push(&arr, 1);
    push(&arr, 3);
    push(&arr, 4);
    push(&arr, 6);

    item = pop(&arr);
    printf("Pop item %d \n", item);

    item = pop(&arr);
    printf("Pop item %d \n", item);

    item = pop(&arr);
    printf("Pop item %d \n", item);

    item = pop(&arr);
    printf("Pop item %d \n", item);


    return 0;
}
