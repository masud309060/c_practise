#include <stdio.h>

#define MAX_QUEUE 5

typedef struct queue {
    int data[MAX_QUEUE + 1];
    int head, tail;
} Queue;

void enqueue(Queue *q, int item) {

    // printf("head: %d, tail: %d \n", q->head, q->tail);

    if((q->tail + 1) % (MAX_QUEUE + 1) == q->head) {
        printf("Queue is full! \n");
        return;
    }

    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (MAX_QUEUE + 1);

};


int dequeue(Queue *q) {
    int item;

    if(q->tail == q->head) {
        printf("Queue is empty!");
        return -1;
    };

    item = q->data[q->head];
    q->data[q->head] = 0;
    q->head =  (q->head + 1) % (MAX_QUEUE + 1);

    return item;
};

int main() {
    Queue numbers;
    numbers.head = 0;
    numbers.tail = 0;

    enqueue(&numbers, 10);
    enqueue(&numbers, 11);
    enqueue(&numbers, 12);
    enqueue(&numbers, 13);


    int item;
    item = dequeue(&numbers);
    printf("dequeue: %d \n", item);

    item = dequeue(&numbers);
    printf("dequeue: %d \n", item);

    int i;
    for(i = 0; i < MAX_QUEUE; i++) {
        printf("%d \n", numbers.data[i]);
    }

    return 0;
}
