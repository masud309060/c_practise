#include <stdio.h>

#define QUEUE_MAX 5

typedef struct queue {
    int data[QUEUE_MAX];
    int head, tail;
} Queue;


void enqueue(Queue *s, int item) {
    if(s->tail < QUEUE_MAX) {
        s->data[s->tail] = item;
        s->tail = s->tail + 1;
    } else {
        printf("Queue is full!");
    }
}

int dequeue(Queue *s) {
    int item = -1;
    if(s->head != s->tail) {
        item = s->data[s->head];
        s->head = s->head + 1;
    } else {
        printf("Queue is empty!");
    }
    return item;
}

int main() {
    Queue numbers;

    numbers.head = 0;
    numbers.tail = 0;

    int item;

    enqueue(&numbers, 2);
    enqueue(&numbers, 4);
    enqueue(&numbers, 7);

    item = dequeue(&numbers);
    printf("%d \n", item);

    item = dequeue(&numbers);
    printf("%d \n", item);

    item = dequeue(&numbers);
    printf("%d \n", item);

    enqueue(&numbers, 12);
    enqueue(&numbers, 24);

    item = dequeue(&numbers);
    printf("%d \n", item);
     item = dequeue(&numbers);
    printf("%d \n", item);


    enqueue(&numbers, 44);
      item = dequeue(&numbers);
    printf("%d \n", item);



    return 0;
}


