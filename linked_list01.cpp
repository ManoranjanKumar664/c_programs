#include<iostream>
#define max 5
int queue[max];
int front=-1;
int rear=-1;

void add(int a);
void show();

int main()
{
    add(30);
    add(19);
    add(20);
    show();
    add(90);
    add(80);
    add(81);
    show();
    return 0;
}

void show()
{
    if(front==-1)
    {
        printf("stack is empty \n");
        return;
    }
    printf("elements are:\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d \n",queue[i]);
    }
}

void add(int value)
{
    if(rear==max-1)
    {
        printf("stack is full \n");
        return; 
    }
    rear++;
    queue[rear]=value;
    if(front==-1)
    {
        front++;
        // stack[rear]=value;
    }
}