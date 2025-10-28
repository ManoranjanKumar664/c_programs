#include<iostream>
struct node
{
    int data;
    struct node *next;
};
struct node *root=0;
void add(int a);
void show();
void search(int a);

int main()
{
    add(40);
    add(100);
    add(90);
    show();
    search(50);
    return 0;
}
void search(int a)
{
    if(root==0)
    {
        printf("linked list is full");
        return;
    }
    else
    {
        struct node *temp=root;
        while(temp!=0)
        {
            if(temp->data==a)
            {
                printf("element found");
                return;
            }
            temp=temp->next;
        }
        printf("element not found");
    }
}

void show()
{
    if(root==0)
    {
        printf("linked list is full.");
        return;
    }
    else
    {
        struct node *temp=root;
        while(temp!=0)
        {
            printf("value is : %d\n", temp->data);
            temp=temp->next;
        }
    }
}

void add(int value)
{
    struct node *x=(struct node*)malloc(sizeof(struct node));
    x->data=value;
    x->next=0;
    if(root==0)
    {
        root=x;
        return;
    }
    else
    {
        struct node *temp=root;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=x;
    }
}