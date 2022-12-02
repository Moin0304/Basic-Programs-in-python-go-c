
#include <stdio.h>
#include<stdlib.h>

int queue[20];
int size;
int front=-1,rear=-1;

void enqueue()
{
    int ele;
    if(rear==size-1)
    {
        printf("Queue is overflowing.");
    }    
    else
    {
        printf("\nEnter element to insert : ");
        scanf("%d",&ele);
        if(rear==-1)
            front++;
            
        rear++;
        queue[rear]=ele;

    }
}

void dequeue()
{
    if(front==-1)
        printf("Queue is Underflowing.");
    else
    {
        printf("Deleting element : %d",queue[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front++;
    }
}

void display()
{   int temp;
    if(front==-1)
        printf("Queue is empty.");
    else
    {
        for(temp=front;temp<=rear;temp++)
            printf(" %d",queue[temp]);
    }
}

int main()
{
    int option;    
    printf("Enter queue size : ");
    scanf("%d",&size);
    printf("1. Enqueue  2. Dequeue  3. Display  4. Exit");
    while(1)
    {   printf("\nEnter your option : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1  :   enqueue();
                        break;
            case 2  :   dequeue();
                        break;
            case 3  :   display();
                        break;
            case 4  :   exit(1);
            default :   printf("Enter valid option.");
        }
    }

    return 0;
}       
