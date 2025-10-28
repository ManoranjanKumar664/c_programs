#include<stdio.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;

void add_front(int a);
void add_rear(int a);
void delete_front();
void delete_rear();
void show_front();
void show_rear();
void show();

int main()
{
    add_front(40);
    add_front(10);
    add_rear(90);
    add_rear(190);
    add_rear(91);
    // delete_rear();
    // delete_rear();
    show_rear();
    show_front();
    delete_front();
    show_front();
    // show();
    return 0;
}

void add_front(int x)
{
    if(front==0||front==-1)
    {
        printf("insertion at front is not possible \n");
        return;
    }
    else
    {
        front--;
        queue[front]=x;
        printf("element inserted at front. \n");
    }
}

void delete_front()
{
    if(front==-1)
    {
        printf("deletion from front is not possible \n");
        return;
    }
    else
    {
        printf("deleted element : %d \n", queue[front]);
        front++;
    }
}

void add_rear(int x)
{
    if(rear==size-1)
    {
        printf("insertion at rear is not possible \n");
        return;
    }
    else
    {
        rear++;
        queue[rear]=x;
        printf("element inserted at rear. \n");
    }
    if(front==-1)
    {
        front++;
    }
}

void delete_rear()
{
    if(rear==-1)
    {
        printf("deletion from rear is not possible \n");
        return;
    }
    else
    {
        printf("deleted element : %d \n", queue[rear]);
        rear--;
    }
}

void show_front()
{
    if(front==-1)
    {
        printf("queue is empty \n");
        return;
    }
    else
    {
        printf("elements are: \n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d \n", queue[i]);
        }
    }
}

void show_rear()
{
    if(rear==-1)
    {
        printf("queue is empty \n");
        return;
    }
    else
    {
        printf("elements are : \n");
        for(int i=rear;i>=0;i--)
        {
            printf("%d \n", queue[i]);
        }
    }
}