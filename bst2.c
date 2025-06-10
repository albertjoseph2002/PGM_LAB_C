#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int c=0;
struct node
{
    int data;
    struct node *left,*right;
};

struct node *newnode(int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=0;
    return temp;
}

struct node *insert(struct node *node,int item)
{
    if(node==NULL)
    {
        node=newnode(item);
        return node;
    }
    else if(item<node->data)
    {
        node->left=insert(node->left,item);
    }
    else{
        node->right=insert(node->right,item);
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

struct node *minimumvalue(struct node *root)
{
    struct node *current=root;
    while(current!=NULL && current->left!=NULL)
    {
        current=current->left;
    }
    return current;
}

struct node *delete(struct node *root,int value)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(value<root->data)
    {
        root->left=delete(root->left,value);
    }
    else if(value>root->data)
    {
        root->right=delete(root->right,value);
    }
    else if(root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    else if(root->left==NULL || root->right==NULL)
    {
        if(root->left==NULL)
        {
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        else
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }
    }
    else
    {
        struct node *temp=minimumvalue(root);
        root->data=temp->data;
        root->right=delete(root->right,temp->data);
    }
    return root;
}

void search(struct node *node,int key)
{   
    if(node==NULL)
    {
        printf("element not found");
    }
    else if(node->data==key)
    {
        printf("element found at position %d",c+1);
    }
    else if(key<node->data)
    {   
        c++;
        search(node->left,key);
    }
    else if(key>node->data)
    {
        c++;
        search(node->right,key);
    }
}

int main()
{
    int ch,value,del,s;
    struct node *node=NULL;
    do
    {
        printf("\n1.insertion\n2.deletion\n3.search\n4.inorder\n5.preorder\n6.postorder\n7.exit\n");
        printf("enter a choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nenter the value to be inserted");
                scanf("%d",&value);
                node=insert(node,value);
                break;
            case 2:
                printf("\nenter the value to be deleted");
                scanf("%d",&del);
                node=delete(node,del);
                break;
            case 3:
                printf("\nenter element to be searched");
                scanf("%d",&s);
                search(node,s);
                break;
            case 4:
                inorder(node);
                break;
            case 5:
                preorder(node);
                break;
            case 6:
                postorder(node);
                break;
            case 7:
                printf("exited");
                break;
            default:
                printf("\ninvalid input");
        }
    }while(ch!=7);
}

