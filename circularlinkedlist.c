#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *head)
{
    struct node *ptr;
    ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertionfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct node *insertionend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *temp = head;
    while (temp->next != head)
    {
        temp = temp ->next;
    }
    ptr -> next = head;
    temp ->next = ptr;
    return head;
}
struct node *insertionatindex(struct node *head, int data , int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    ptr ->data = data;
    temp = head;
    int c = 0;
    while (c < index -1)
    {
        temp = temp ->next;
        c++;
    }
    ptr -> next = temp -> next;
    temp ->next = ptr;
    return head;
}
struct node *deletionatfirst(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    temp = head;
   
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = head;

    printf("Before insertion : \n");
    linkedlistTraversal(head);

    printf("\nAfter insertion : \n");
    head = insertionfirst(head, 121);
    linkedlistTraversal(head);

    printf("\nAfter the insertion at end : \n");
    head = insertionend(head, 123);
    linkedlistTraversal(head);


    printf("\nAfter the insertion at any given index : \n");
    head = insertionatindex(head,45,1);
    linkedlistTraversal(head);

    printf("\nAfter the deletion at first : \n");
    head = deletionfirst(head);
    linkedlistTraversal(head);

    return 0;
}