#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node Node;

void print(Node *head)
{
    Node *ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

void inEnd(Node**head){ 
    Node *ptr;Node*p;
    ptr = *head;
    while(ptr->next->next != *head){
        ptr = ptr->next;
    }
    p = ptr->next;
    ptr->next = *head;
    free(p);
}

void inBeg(Node **head){
    Node *ptr=*head;Node *p;
    while(ptr->next != *head){ptr=ptr->next;}
    p =  *head;
    *head = (*head)->next ;
    ptr->next = (*head) ;
}

void mid(Node **head,int pos){
    Node *ptr=*head;Node *p;
    int c = 0 ;
    while(c<pos-1){
        ptr = ptr->next;
    
    }
    p = ptr->next ;
    ptr->next=p->next ;
    free(p) ; 
}

void insBeg(Node **head, int value)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = value;
    Node *p = *head;
    while(p->next !=*head) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = *head;
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

    first->data = 2;
    first->next = last;

    last->data = 3;
    last->next = head;

    print(head);
    printf("\nBeginning:\n");
    inBeg(&head);
    print(head);
     printf("\nEnd:\n");
     inEnd(&head);
     print(head);
     insBeg(&head,10);
    insBeg(&head,20);
     printf("\nMid:\n");
     mid(&head,1);
     print(head);
    
}