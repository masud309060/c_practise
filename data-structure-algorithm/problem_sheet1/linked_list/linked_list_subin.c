#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createNode(int item, struct node *next){
    // memory allocation
    struct node *new_node = (struct node*)(malloc(sizeof(struct node)));
    // if there is an error for memory allocation
    if(new_node == NULL) {
        printf("Error: could not create newNode!");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;


    return new_node;
};

int main()
{

    struct node *n;

    n = createNode(10, NULL);
    printf("data:: %d \n", n->data);
    return 0;
}