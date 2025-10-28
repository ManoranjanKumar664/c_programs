#include<stdio.h>
void insertfront(int x);
void insertrear(int a);
void deletefront();
void show();
int front=-1;
int rear=-1;
#define max 4
int queue[max];

int main()
{
    insertrear(40);
    insertrear(90);
    show();
    deletefront();
    deletefront();
    // show();
    // show();
    insertfront(50);
    insertfront(10);
    show();
    return 0;
}

void deletefront()
{
    if(front==-1)
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        if(front==rear)
        {
            printf("element deleted at front-end:-%d.\n", queue[front]);
            queue[front]=0;
            front=-1;
            rear=-1;
        }
        else
        {
        printf("element deleted at front-end:-%d.\n", queue[front]);
        queue[front]=0;
        front++;
        }
    }
}

void insertrear(int x)
{
    if(rear==max-1)
    {
        printf("queue is full\n");
        return;
    }
    else
    {
        rear++;
        queue[rear]=x;
        printf("element inserted at rear-end.\n");
        if(front==-1)
            front++;
    }
}

/* void insertfront(int x)
{
    if(front==0||front==-1)
    {
        printf("queue is full\n");
        return;
    }
    else //(front>0)
    {
        front--;
        queue[front]=x;
        printf("element inserted at front-end.\n");
    }
} */

void insertfront(int x)
{
    if(front!=0||front!=-1)
    {
        front--;
        queue[front]=x;
        printf("element inserted at front-end.\n");
    }
} 

void show()
{
    int temp=front;
    if(temp!=-1)
    {
        while(temp<=rear)
        {
            printf("%d\n",queue[temp]);
            temp++;
        }
    }
}