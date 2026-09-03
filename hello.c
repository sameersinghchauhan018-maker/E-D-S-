#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *second, *third, *temp;

    // Creating first node
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    // Creating second node
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = 20;

    // Creating third node
    third = (struct Node *)malloc(sizeof(struct Node));
    third->data = 30;

    // Linking the nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Traversing and displaying the linked list
    temp = head;

    printf("Linked List: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}