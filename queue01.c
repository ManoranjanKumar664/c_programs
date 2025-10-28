#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct queue
{
    struct node *front;
    struct node *rear;
};

struct queue* creatqueue()
{
    struct queue*p=(struct queue*)malloc(sizeof(struct queue));
    p->front=0;
    p->rear=0;
}

int isempty(struct queue *q)
{
    if(q->front==0)
    {
        // printf("queue is empty");
        return 1;
    }
    else 
    {
        return 0;
    }
}

void enqueue(struct queue *qref, int element)
{
    struct node *elm=(struct node*)malloc(sizeof(struct node));
    elm->data=element;
    elm->next=0;
    if(isempty(qref))
    {
        qref->front=elm;
        qref->rear=elm;
    }
    else
    {
        qref->rear->next=elm;
        qref->rear=elm;
    }
}

void show(struct queue *a)
{
    if(isempty(a))
    {
        printf("queue is empty");
        return;
    }
    else
    {
        struct node *temp=a->front;
        while(temp!=0)
        {
            printf("%d \n", temp->data);
            temp=temp->next;
        }
    }
}

int dequeue(struct queue *d)
{
    if(isempty(d))
    {
        printf("queue is already empty \n");
        return -1;
    }
    else
    {
        struct node *temp=d->front;
        d->front=d->front->next;
        int value=temp->data;
        free(temp);
        return value;
    }
}

int main()
{
    struct queue *mano=creatqueue();
    enqueue(mano, 50);
    enqueue(mano, 100);
    show(mano);
    int a=dequeue(mano);
    printf("deleted element=%d \n", a);
    int b=dequeue(mano);
    printf("deleted element=%d \n", b);
    return 0;
}
