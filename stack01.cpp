#include<iostream>
#define size 5
int stack[size];
int top=-1;
void put(int a);
void show();
void deletestack();

int main()
{
    put(30);
    put(10);
    put(20);
    put(90);
    put(89);
    put(34);
    show();
    deletestack();
    show();
    return 0;
}

void show()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d \n", stack[i]);
    }
}

void put(int value)
{
    if(top==size-1)
    {
        printf("stack is full \n");
        return;
    }
    top++;
    stack[top]=value;
}

void deletestack()
{
    if(top==-1)
    {
        printf("stack is empty \n");
        return;
    }
    printf("deleted elements : %d \n", stack[top]);
    top--;
}