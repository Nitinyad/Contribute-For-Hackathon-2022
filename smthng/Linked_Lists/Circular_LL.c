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

void inBeg(Node **head, int value)
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

void mid(Node**head,int value,int pos){
    Node*ptr=(Node*)malloc(sizeof(Node));
    ptr->data = value;
    Node *p = *head;
    int c=0;
    while(c <pos-1){
        p = p->next ; 
    }
  
    ptr->next=p->next;
     p->next = ptr;
}

void inEnd(Node **head,int value){
    Node*ptr=(Node*)malloc(sizeof(Node));
    ptr->data = value;
    Node*p=*head;
    while(p->next!=*head){
        p = p->next;
    }
    p->next=ptr;
    ptr->next = *head ;

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
    inBeg(&head, 10);
    print(head);
    printf("\nEnd:\n");
    inEnd(&head,30);
    print(head);
    printf("\nMid:\n");
    mid(&head,20,1);
    print(head);
    
}