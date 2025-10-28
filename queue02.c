#include<stdio.h>
int front=-1;
int rear=-1;
#define max 5
int q[max];
void insert(int a);
void show();
void delete();

int main()
{
    insert(50);
    insert(10);
    insert(40);
    insert(90);
    insert(100);
    insert(111);
    show();
    delete();
    delete();
    delete();
    delete();
    delete();
    delete();
    insert(91);
    show();
    // printf("%d", q[front]);
    return 0;
}

void insert(int a)
{
    if(rear==max-1)
    {
        printf("queue is full, %d can't be inserted.\n", a);
        return;
    }
    else 
    {
        if(front==-1)
        {
            front=front+1;
        }
        rear++;
        q[rear]=a;
    }
}

void show()
{
    printf("elements are:\n");
    if(front==-1)
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        int temp=front;
        while(temp<=rear)
        {
            printf("%d", q[temp]);
            printf("\n");
            temp++;
        }
    }
}

void delete()
{
    if(front==-1||front>rear)
    {
        front=-1;
        rear=-1;
        printf("queue is empty\n");
        return;
    }
    else
    {
        printf("deleted element=%d \n", q[front]);
        q[front]=0;
        front++;
    }
}