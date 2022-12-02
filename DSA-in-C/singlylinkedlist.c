
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

struct node* createNode()
{
    int num;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("\nMomory is not allocated.");
    else
    {
        printf("\nEnter number : ");
        scanf("%d",&num);
        temp->data=num;
        temp->next=NULL;
    }
    return temp;
}
void Ins_ending()
{
    struct node *temp=head;
    struct node *new=createNode();
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
    }
}

void Ins_middle()
{
    struct node *new=createNode();
    struct node *temp=head;
    int pos,count=0;
    printf("\nEnter node position : ");
    scanf("%d",&pos);
    if(head==NULL)
        head=new;
    else
    {
        while(count < pos-2)
        {
            count++;
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
    }
}

void Ins_Beginning()
{
    struct node *new=createNode();
    if(head==NULL)
        head=new;
    else
    {
        new->next=head;
        head=new;
    }
}
void display()
{
    struct node *temp=head;
    if(temp==NULL)
    {
        printf("\nLinked list is empty.");
        return;
    }
    while(temp->next!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

void Del_ending()
{
    struct node *temp;
    if(head==NULL)
        printf("Linked list is empty");
    else
    {
        temp=head;
        if(head->next==NULL)                                    // if one node exists in linked lists.
        {   
            printf("Deleting node data : %d",temp->data);
            free(head);
            head=NULL;
            return;
        }
        while(temp->next->next!=NULL)
            temp=temp->next;
        printf("Deleting node data : %d",temp->next->data);
        free(temp->next);
        temp->next=NULL;
    }
}

void Del_beginning()
{
    struct node *temp;
    if(head==NULL)
        printf("Linked list is empty");
    else
    {   
        temp=head;
        head=temp->next;
        printf("Deleting node data : %d",temp->data);
        free(temp);
    }
}

void Del_middle()
{
    struct node *temp1,*temp;
    int pos,count=0;
    printf("\nEnter node position : ");
    scanf("%d",&pos);
    if(head==NULL)
        printf("Linked list is empty");
    else
    {   
        temp1=head;
        while(count < pos-2)
        {
            count++;
            temp1=temp1->next;
        }
        temp=temp1->next;
        temp1->next=temp->next;
        printf("Deleting node data : %d",temp->data);
        free(temp);
    }
}


int main()
{
    int option;
    printf("Insertion : \n1. Beginning  2. Middle   3. Ending   4. display  \nDeletion : 5. Beginning   6. Middle   7. Ending   8. Exit");
            
    while(1)
    {
        printf("\nEnter your option : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1 :    Ins_Beginning();
                        break;
            case 2 :    Ins_middle();
                        break;
            case 3 :    Ins_ending();
                        break;
            case 4 :    display();
                        break;
            case 5 :    Del_beginning();
                        break;
            case 6 :    Del_middle();
                        break;
            case 7 :    Del_ending();
                        break;
            case 8 :    exit(1);
            default :   printf("Enter valid option.");
                        break;
        }
    }
    return 0;
}
