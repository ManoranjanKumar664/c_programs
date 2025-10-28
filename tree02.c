#include<stdio.h>
#include<stdlib.h>

struct bstnode
{
    int data;
    struct bstnode *left;
    struct bstnode *right;
};
struct bstnode *root=0;
void insert(struct bstnode *x, int data);
void preorder(struct bstnode *x);

int main()
{
    insert(root, 100);
    insert(root, 50);
    insert(root, 19);
    preorder(root);
    return 0;
}

void insert(struct bstnode *root, int value)
{
    struct bstnode *n=(struct bstnode*)malloc(sizeof(struct bstnode));
    n->left=0;
    n->right=0;
    n->data=value;
    if(root==0)
    {
        root=n;
    }
    else 
    {
        struct bstnode *temp=root;
        while(temp!=0)
        {
            if(value<temp->data)
            {
                if(temp->left==0)
                {
                    temp->left=n;
                }
                else
                {
                    temp=temp->left;
                }
            }
            if(value>temp->data)
            {
                if(temp->right==0)
                {
                    temp->right=n;
                }
                else
                {
                    temp=temp->right;
                }
            }
        }
    }
}

void preorder(struct bstnode *n)
{
    if(n==0)
    {
        printf("tree is empty \n");
        return;
    }
        printf("%d \n", n->data);
        preorder(n->left);
        preorder(n->right);
}
