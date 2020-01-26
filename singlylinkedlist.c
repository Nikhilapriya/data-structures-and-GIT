#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int i,n,val;
    struct node *p,*q,*head;
    printf("Total number of nodes : ");
    scanf("%d",&n);
    printf("Enter the value of the head node: ");
    scanf("%d",&val);
    q=(struct node *)malloc(sizeof(struct node)); //creating a node(head node)
    q->data=val;
    q->next=NULL;
    head=q;
    p=head;


    for(i=1;i<n;i++)                             //creating a singly linked list
    {
        printf("Value of the next node :");
        scanf("%d",&val);
        q=(struct node *)malloc(sizeof(struct node));
        q->data=val;
        q->next=NULL;
        p->next=q;
        p=p->next;
    }
    printf("\n\n\n");
    p=head;
    while(p!=NULL)
    {
        printf("\t%d",p->data);                //printing the data of each node
        p = p->next;
    }
    return 0;
}

