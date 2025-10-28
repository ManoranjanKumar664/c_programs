#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int x;
    struct node *nextnode;
}mano;

int main()
{
    mano *p=(mano*)malloc(sizeof(mano));
    p->x=40;
    printf("%d",p->x);
    return 0;
}