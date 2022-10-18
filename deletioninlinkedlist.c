#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct node *deletionfirst(struct node *head)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deletionlast(struct node *head)
{
    struct node *ptr;
    struct node *temp;
    ptr = head;
    temp = head->next;
    while (temp->next != NULL)
    {
        temp = temp->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(temp);
    return head;
}

struct node *deletionindex(struct node *head, int index)
{
    struct node *ptr;
    struct node *temp;
    ptr = head;
    temp = head->next;
    int c = 0;
    while (c < index - 1)
    {
        temp = temp->next;
        ptr = ptr->next;
        c++;
    }
    ptr->next = temp->next;
    free(temp);
    return head;
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

    head->data = 4;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = NULL;

    printf("Before deletion : \n");
    linkedlistTraversal(head);

    // head = deletionfirst(head);
    // printf("\nAfter deletion from first : \n");
    // linkedlistTraversal(head);

    // printf("\nAfter deletion from the last : \n");
    // head = deletionlast(head);
    // linkedlistTraversal(head);

    printf("\nAfter deletion from the index : \n");
    head = deletionindex(head, 3);
    linkedlistTraversal(head);

    return 0;
}