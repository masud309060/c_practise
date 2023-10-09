#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display();

int main()
{

    // Node Initializing!
    struct Node *HEAD;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    // Allocating memory!
    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    forth = malloc(sizeof(struct Node));

    // Assigning the values of data!
    first->data = 10;
    second->data = 20;
    third->data = 30;
    forth->data = 40;

    // Connecting nodes with each other!
    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = NULL;

    // Saving the address of first node
    HEAD = first;

    display(first);

    return 0;
}

void display(struct Node *ptr)
{
    printf("Linked list elements: ");

    while (ptr->next != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

     printf("\n ");
}