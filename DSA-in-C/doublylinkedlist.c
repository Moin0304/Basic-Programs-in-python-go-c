
#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *llink;
    int data;
    struct node *rlink;
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
        temp->llink=NULL;
        temp->rlink=NULL;
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
        while(temp->rlink!=NULL)
        {
            temp=temp->rlink;
        }
        
        temp->rlink=new;
        new->llink=temp;
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
            temp=temp->rlink;
        }
        new->rlink=temp->rlink;
        new->llink=temp;
        temp->rlink->llink=new;
        temp->rlink=new;
    }
}

void Ins_Beginning()
{
    struct node *new=createNode();     // new node is created.
    if(head==NULL)
        head=new;
    else
    {   
        new->rlink=head;
        head->llink=new;
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
    while(temp->rlink!=NULL)
    {
        printf("%d <-> ",temp->data);
        temp=temp->rlink;
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
        if(head->rlink==NULL)                                    // if one node exists in linked lists.
        {   printf("Deleting node data : %d",temp->data);
            free(head);
            head=NULL;
            return;
        }
        while(temp->rlink->rlink!=NULL)
            temp=temp->rlink;
        printf("Deleting node data : %d",temp->rlink->data);
        free(temp->rlink);
        temp->rlink=NULL;
    }
}

void Del_beginning()
{
    struct node *temp;
    if(head==NULL)
        printf("Linked list is empty");
    else
    {   temp=head;
        head=temp->rlink;
        head->llink=NULL;
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
    {   temp1=head;
        while(count < pos-2)
        {
            count++;
            temp1=temp1->rlink;
        }
        
        temp=temp1->rlink;
        temp1->rlink=temp->rlink;
        temp->rlink->llink=temp1;
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
