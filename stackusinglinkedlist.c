#include<stdio.h>
#include<stdlib.h>

int top = -1;

struct node {
    int data;
    struct node *next;
};

void isEmpty(){
    if (top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(int n)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Stack overflow\n");
    }
    else{
        ptr ->data = n;
        ptr ->next = top;
        top = ptr;
    }
    
}

int main()
{
    printf("Which operation do you want to : \n");

    return 0;
}