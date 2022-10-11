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
    ptr->data = value;
    Node *p = *head;
    while (p->next!= NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->prev = p;
}

void mid(Node **head, int value, int pos)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = value;
    Node *p = *head;
    int c = 0;
    while (c < pos - 1)
    {
        p = p->next;
        c++;
    }
    ptr->next = p->next;
    p->next = ptr ;
    ptr->prev = p ;
    p = p->next;
    p->prev = ptr ;
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

    printf("\nBeginning:\n");
    inBeg(&head, 10);
    print(head);
    printf("\nEnd:\n");
    inEnd(&head, 20);
    print(head);
    printf("\nMid:\n");
    mid(&head, 30, 2);
    print(head);
}