#include <stdio.h>
#include<stdlib.h>
int stack[100];
int size;
int top=-1;

void push()
{
    if(top==size-1)
        printf("\nStack is overflow.");
    else
    {   top++;
        printf("Enter stack element : ");
        scanf("%d",&stack[top]);
    }    
}

void display()
{   int i;
    if(top==-1)
        printf("\nStack is empty.");
    else
    {
        printf("\nStack elements : ");
        for(i=0;i<=top;i++)
            printf(" %d",stack[i]);    
    }
}

void pop()
{   int temp;
    if(top==-1)
        printf("Stack is underflow.");
    else
    {   temp=stack[top];
        top--;
        printf("\nDeleted element : %d",temp);
    }
}

void topofthestack()
{
    if(top==-1)
        printf("Stack is empty.");
    else
        printf("Top of the stack : %d",stack[top]);
}

void isempty()
{
    if(top==-1)
        printf("Stack is empty.");
    else
        printf("Stack is not empty.");
}
int main()
{
    int opt;
    printf("Enter size of the stack : ");
    scanf("%d",&size);
    printf("1.Push  2. Pop  3. Top of the stack     4. isEmpty  5. Display  6.Exit ");
    
    while(1)
    {
        printf("\nEnter your option : ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1 :    push();
                        break;
            case 2 :    pop();
                        break;
            case 3 :    topofthestack();
                        break;
            case 4 :    isempty();
                        break;
            case 5 :    display();
                        break;
            case 6 :    exit(1);
            default : printf("\nInvalid option.");
        }
    }
    
    return 0;
}
