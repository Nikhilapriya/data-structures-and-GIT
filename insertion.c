#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          // Data
    struct node *next; // Address
}*head;


void createList(int n);
void insertNodeAtEnd(int data);
void displayList();


int main()
{
    int n, data;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);
    displayList();

    printf("\n\n\nEnter data to insert at end of the list: ");
    scanf("%d", &data);

    insertNodeAtEnd(data);
    displayList();

    return 0;
}
void createList(int n)
{
    struct node *New,*p;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of head node : ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    p = head;


    for(i=2; i<=n; i++)
    {
        New = (struct node *)malloc(sizeof(struct node));   //to create a node
        printf("Enter the data of next node: ");
        scanf("%d", &data);

        New->data = data;
        New->next = NULL;

        p->next = New;
        p = p->next;
    }



}
void insertNodeAtEnd(int data)       //function to insert a node in the end
{
    struct node *New, *p ;

    New = (struct node*)malloc(sizeof(struct node));
    New->data = data;
    New->next = NULL;

    p = head;
    while(p->next != NULL)
        p = p->next;

    p->next = New;
}



void displayList()     //to display the node
{
    struct node *p ;
    p = head;
    while(p != NULL)
    {
        printf("\t%d", p->data);
        p = p->next;
    }

}
