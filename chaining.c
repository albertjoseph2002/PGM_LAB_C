#include<stdio.h>
#include<stdlib.h>
#define hashsize 10
struct node
{
    int data;
    struct node *next;
};
struct node *head[hashsize]={NULL};
struct node *c;

void insert(int key)
{
    int i;
    i=key%hashsize;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=key;
    temp->next=NULL;
    if(head[i]==NULL)
    {
        head[i]=temp;
    }
    else
    {
        c=head[i];
        while(c->next!=NULL)
        {
            c=c->next;
        }
        c->next=temp;
    }
}

void display()
{
    for(int i=0;i<=hashsize;i++)
    {
        if(head[i]==NULL)
        {
            printf("\nnothing at position %d\n",i);
        }
        else
        {
            printf("\nelemts at location %d\n",i);
            for(c=head[i];c!=NULL;c=c->next)
            {
                printf("%d->",c->data);
            }
        }
    }
}

void search()
{
    int s;
    printf("enter element to search");
    scanf("%d",&s);
    int index=s%hashsize;
    if(head[index]==NULL)
    {
        printf("element not found");
    }
    else
    {
        for(c=head[index];c!=NULL;c=c->next)
        {
            if(s==c->data)
            {
                printf("element found");
            }
        }
    }
}


int main()
{
    int ch;
    do
    {
        printf("\n1.insert\n2.display\n3.search");
        printf("enter your choice");
        scanf("%d",&ch);
        int key;
        switch(ch)
        {
            case 1:
                
                printf("\nenter value to be insreted\n");
                scanf("%d",&key);
                insert(key);
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            default:
                printf("invalid");
        }
    }while(ch!=4);
    return 0;
}