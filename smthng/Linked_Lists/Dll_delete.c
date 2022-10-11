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

void delBeg(Node**head){
    Node*ptr;
    ptr = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(ptr);
}

void delEnd(Node**head){
    Node*p = *head;
    Node*ptr ;
    while(p->next->next != NULL){
        p = p->next;
    }
    ptr = p->next ;
    p->next = NULL;
    
    free(ptr);

}

void mid(Node**head,int pos){ 
    Node*p = *head;
    int c= 0;
    while(c<pos-1){
        p = p->next;
    }
    Node*ptr = p->next;
    p->next = ptr->next;
    free(ptr);


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
    delBeg(&head);
    print(head);
     printf("\nEnd:\n");
     delEnd(&head);
     print(head);
     printf("\nMid:\n");
    inBeg(&head,10);
    inBeg(&head,20);
    mid(&head,1);
    print(head);
    
}