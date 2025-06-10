#include<stdio.h>
#include<stdlib.h>
void insertnode(int d,struct node *head,struct node *newnode,struct node *temp);
void printlist(struct node *temp,struct node *head);
int res=0;
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head,*newnode,*temp;
    head=0;
    int n,i=0,d;
    printf("enter the numebr of nodes");
    scanf("%d",&n);
    res=n;
    while(i<n)
    {
        printf("enter data");
        scanf("%d",&d);
        insertnode(d,head,newnode,temp);
        i++;
        res--;
    }
    
    
    return 0;
}
void insertnode(int d,struct node *head,struct node *newnode,struct node *temp)
{

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    if(res==1)
    {
        printlist(temp,head);
    }
    
}
void printlist(struct node *temp,struct node *head)
{
    printf("\nnodes are\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
