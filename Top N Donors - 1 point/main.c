//efejzo20
#include <stdio.h>
#include <stdlib.h>

struct node
{
    char name[25];
    char surname[25];
    float money;
    struct node *next;
};

void insertSort(struct node **head);
void displaylist(struct node *head, int m);


int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);

    struct node *head=NULL;

    for(i=0;i<n;i++)
    {
        insertSort(&head);
    }

    displaylist(head, m);


    return 0;
}


void insertSort(struct node **head)
{
    struct node *curr, *prev, *newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    scanf("%s %s",newNode->name,newNode->surname);
    scanf("%f",&newNode->money);
    newNode->next=NULL;
    curr=*head;

    if(*head==NULL)
    {
        *head=newNode;
        return;
    }

    if(curr->money <= newNode->money)
    {
        newNode->next=curr;
        *head=newNode;
    }
    else
    {
        while((curr!=NULL)&&(curr->money > newNode->money))
        {
            prev=curr;
            curr=curr->next;
        }
        if(curr==NULL) // at the end
        {
            prev->next=newNode;
        }
        else // middle
        {
            prev->next=newNode;
            newNode->next=curr;
        }
    }
}

void displaylist(struct node *head, int m)
{
    struct node *temp;
    temp=head;

    for(int i=0; i<m; i++)
    {
        printf("%s %s %f\n", temp->name, temp->surname, temp->money);
        temp=temp->next;
    }
}
