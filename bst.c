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
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->left=temp->right=NULL;
    return temp;
}

struct node *insert(struct node *node,int key)
{
    if(node==NULL)
    {
        node=newnode(key);
    }
    else if(key<node->data)
    {
        node->left=insert(node->left,key);
    }
    else if(key>node->data)
    {
        node->right=insert(node->right,key);
    }
    return node;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d->",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d->",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d->",root->data);
    }
}

struct node *minimumvaluenode(struct node *node)
{
    struct node *current =node;
    while(current!=NULL && current->left!=NULL)
    {
        current=current->left
    }
    return current;
}
struct node *delete(struct node *node,int value)
{
    if(node==NULL)
    {
        return NULL;
    }
    else if(value<node->data)
    {
        node->left=delete(node->left,value);
    }
    else if(value>node->data)
    {
        node->right=delete(node->right,value);
    }
    else if(node->left==NULL && node->right==NULL)
    {
        free(node);
        return NULL;
    }
    else if(node->left==NULL || node->right==NULL)
    {
        if(node->left==NULL)
        {
            struct node *temp=node->right;
            free(node);
            return temp;
        }
        else{
            struct node *temp=node->left;
            free(node);
            return temp;
        }

    }
    else
    {
        struct node *temp=minimumvaluenode(node);
        node->data=temp->data;
        node->right=delete(node->right,temp->data);
    }
    return node;
}
void search(struct node *node,int key)
{
    if(node==NULL)
    {
        printf("nof ound");
    }
    else if(node->data==key)
    {
        printf("element found");

    }
    else if(key<node->data)
    {
        search(node->left,key);
    }
    else if(key>node->data)
    {
        search(node->right,key);
    }
}
int c=0;
int numberofleafnodes(struct node *node)
{
    if(node!=NULL)
    {
        numberofleafnodes(node->left);
        if(node->left==NULL && node->right==NULL)
        {
            c++;
        }
        numberofleafnodes(node->right);
    }
    return c
}