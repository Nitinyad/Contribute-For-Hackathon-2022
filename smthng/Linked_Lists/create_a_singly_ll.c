#include<stdio.h> 
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
typedef struct node Node ;
Node* head ;
void create(Node*head){
    Node* ptr = (Node*)malloc(sizeof(Node));
    Node* p ;
    for( p = head;p->next!=NULL;p = p->next) ;
    p->next = ptr;
    int value;
    printf("Enter a value : ");
    scanf("%d", &value);
    ptr->data = value;
    ptr->next = NULL ;
    
};

void traverse(Node* head){
    for(Node* p = head;p->next!=NULL;p = p->next){
        printf("%d ",p->data);
    }
  
}

void beginning(Node* head,int n){
    Node *p = (Node*)malloc(sizeof(Node));
    p->next = head;
    p->data  = n;
    p = head ; 
}

void main(){ 
    for (int i=0;i<5;i++){ 
        create(head) ;
    }

    traverse(head) ;
}