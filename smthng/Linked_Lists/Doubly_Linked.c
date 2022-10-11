#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node Node;

void print(Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

void inBeg(Node **head, int value)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = value;
    ptr->next = (*head);
    (*head)->prev = ptr;
    ptr->prev = NULL;
    *head = ptr;
}

void inEnd(Node **head, int value)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node*p = *head;
    while (p != NULL)
    {
        p= p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->prev = p;
    ptr->data = value;
    p = ptr;
}

void main()
{
    Node *head = NULL;
    Node *first = NULL;
    Node *last = NULL;
    head = (Node *)malloc(sizeof(Node));
    first = (Node *)malloc(sizeof(Node));
    last = (Node *)malloc(sizeof(Node));
    head->data = 1;
    head->next = first;
    head->prev = NULL;
    first->data = 2;
    first->next = last;
    first->prev = head;
    last->data = 3;
    last->next = NULL;
    last->prev = first;
    print(head);
    printf("\n");
    inBeg(&head, 10);
    print(head);
    printf("\n");
    inEnd(&head,420);
    print(head);
}