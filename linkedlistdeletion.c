#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
void linkedlistTraversal(struct node*ptr){
    while (ptr!=NULL)
    {
        printf(" %d",ptr->data);
        ptr = ptr->next;
    }
    
}

int deletionfirst(struct node*head){
    struct node*ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int deletionlast(struct node*head){
    struct node*ptr;
    ptr = head;
    struct node*p;
    p = head;
    while (p!=NULL)
    {
        p = p->next;
    }
    struct node*q = p->next;
    ptr ->next = NULL;
    free(q);
    
}


void main(){
    struct node*head;
    struct node*second;
    struct node*third ;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));


    head->data = 3;
    head->next = second;

    second->data = 5;
    second ->next = third;

    third ->data = 45;
    third ->next = NULL;

    printf("The linked list before deletion : \n");
    linkedlistTraversal(head);

    printf("\nAfter deletion the linkedlist is : \n");
    head = deletionfirst(head);
    linkedlistTraversal(head);
}