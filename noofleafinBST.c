#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int data;
    struct node *left,*right;
};

struct node *newnode(int value)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->left=temp->right=NULL;
    return temp;
}

struct node *insert(struct node *node,int value)
{
    if(node==NULL)
    {
        node=newnode(value);
        return node;
    }
    else if(value<node->data)
    {
        node->left=insert(node->left,value);
    }
    else if(value>node->data)
    {
        node->right=insert(node->right,value);
    }
    return node;
}
int count=0;
int noofleafnodes(struct node *node)
{
    if(node!=NULL)
    {
        noofleafnodes(node->left);
        if(node->left==NULL && node->right==NULL)
        {
            count++;
        }
        noofleafnodes(node->right);
    }
    return count;
}

int main()
{
    int n,value;
    struct node *node=NULL;
    printf("enter the numebr of elements");
    scanf("%d",&n);
    while(n>0)
    {
        printf("enter the elememnt");
        scanf("%d",&value);
        node=insert(node,value);
        n--;
    }
    printf("number of leaf nodes are %d",noofleafnodes(node));
}