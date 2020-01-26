#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;

void createList(int n);
void deleteLastNode();
void displayList();


int main()
{
    int n, choice;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    displayList();

    printf("\n\n\nPress 1 to delete last node: ");
    scanf("%d", &choice);
    if(choice == 1)
        deleteLastNode();
    displayList();
    return 0;
}

void createList(int n)
{
    struct node *New, *p;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));    //to create a head node
    printf("Enter the data of head node: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    p = head;
    for(i=1; i<n; i++)                       //to create a singly linked list
    {
        New = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of next node :");
        scanf("%d", &data);

        New->data = data;
        New->next = NULL;

        p->next = New;
        p = p->next;
    }
}
void deleteLastNode()          //function to delete the last node
{
    struct node *toDelete, *secondLastNode;
    toDelete = head;
    secondLastNode = head;
    while(toDelete->next != NULL)
    {
        secondLastNode = toDelete;
        toDelete = toDelete->next;
    }
        secondLastNode->next = NULL;
        free(toDelete);
}
void displayList()            //function to display the list
{
    struct node *p;
    p = head;
    while(p != NULL)
    {
        printf("\t%d", p->data);
        p = p->next;
    }

}

