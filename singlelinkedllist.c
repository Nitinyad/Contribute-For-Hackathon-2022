#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
}; 

int main()
{

    // linked list is the linear data structure , in which the elements are not stored in contiguour memory location.
    // types of linked list :-
    // 1.singly linked list
    // 2.doubly linked list
    // 3.ciricular linked list
    // 4.doubly circular linked list

    //*****singly linked list
    struct node *head, *newnode, *temp; // here temp is used to traverse the list
    head = 0;
    int choice;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("do you want to continue press 1 to continue and 0 for exit .\n");
        scanf("%d", &choice);
    }

    // to display the linked list
    int count = 0;
    temp = head;
    printf("The linked list will be : \n");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nThe length of the linked list is : ");
    printf("\n%d", count);

    return 0;
}
