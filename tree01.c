#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void preorder(struct node *a);
void inorder(struct node *a);
void postorder(struct node *a);

struct node *root=0;

int main()
{
    inorder(root);
    postorder(root);
    preorder(root);
    return 0;
}


void preorder(struct node *n)
{
    if(n==0)
    {
        printf("\n tree is empty");
        return;
    }
    printf("%d", n->data);
    preorder(n->left);
    preorder(n->right);
}

void inorder(struct node *n)
{
    if(n==0)
    {
        printf("\n tree is empty");
        return;
    }
    inorder(n->left);
    printf("%d",n->data);
    inorder(n->right);
}

void postorder(struct node *n)
{
    if(n==0)
    {
        printf("\n tree is empty");
        return;
    }
    postorder(n->left);
    postorder(n->right);
    printf("%d",n->data);
}

/* void levelorder(struct node *n)
{
    if(n==0)
    {
        printf("tree is empty");
        return;
    }

} */