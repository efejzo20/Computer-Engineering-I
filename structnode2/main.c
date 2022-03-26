//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int id;
    char name[15];
    char surname[15];
    int grade[3];
    struct node *next;
}*head;

void createlist(int n);
void showList();
void insertNewNode();
void newNodeEnd();
void newNodeBeginnig();

int main()
{
    int n;
    char position[10];
    char end[]="END";
    char start[]="START";

    printf("Enter n:");
    scanf("%d",&n);
    createlist(n);

    printf("Where you want to add the new node");

    scanf("%s",position);
    if(strcmp(position, end)==0)
    {
        newNodeEnd();
    }
    else if(strcmp(position, start)==0)
    {
        newNodeBeginnig();
    }
    else
    {
        insertNewNode();
    }

    showList();

    return 0;
}

void createlist(int n)
{
    int i,j;
    struct node *newNode, *temp;

    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
    {
        printf("Cant allocate the memory");
        return;
    }

    printf("Enter the data for the first node\n");

    scanf("%d", &head->id);
    scanf("%s", head->name);
    scanf("%s", head->surname);
    for(j=0; j<3; j++)
        scanf("%d", &head->grade[j]);
    head->next=NULL;

    temp=head;

    for(i=2; i<=n; i++)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            printf("Cant allocate the memory");
            break;
        }
        printf("Enter the data for node %d\n",i);
        scanf("%d", &newNode->id);
        scanf("%s", newNode->name);
        scanf("%s", newNode->surname);
        for(j=0; j<3; j++)
            scanf("%d", &newNode->grade[j]);
        newNode->next=NULL;

        temp->next=newNode;
        temp=newNode;
    }
}

void insertNewNode()
{
    int i,j,pos;
    struct node *newNode, *temp;

    printf("The pos to insert the node");
    scanf("%d",&pos);

    newNode=(struct node*)malloc(sizeof(struct node));

    if(newNode==NULL)
    {
        printf("Cant allocate the memory");
        return;
    }
    printf("Enter the data for node\n");
    scanf("%d", &newNode->id);
    scanf("%s", newNode->name);
    scanf("%s", newNode->surname);
    for(j=0; j<3; j++)
        scanf("%d", &newNode->grade[j]);
    newNode->next=NULL;

    temp=head;

    for(i=2; i<pos; i++)
    {
        temp=temp->next;
        if(temp==NULL)
            break;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void newNodeEnd()
{
    int j;
    struct node *newNode, *temp;

    newNode=(struct node*)malloc(sizeof(struct node));

    if(newNode==NULL)
    {
        printf("Cant allocate the memory");
        return;
    }
    printf("Enter the data for new node\n");
    scanf("%d", &newNode->id);
    scanf("%s", newNode->name);
    scanf("%s", newNode->surname);
    for(j=0; j<3; j++)
        scanf("%d", &newNode->grade[j]);
    newNode->next=NULL;

    temp=head;

    while(temp!=NULL)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            temp->next=newNode;
            newNode->next=NULL;
        }
    }

}

void newNodeBeginnig()
{
    int j;
    struct node *newNode, *temp;

    newNode=(struct node*)malloc(sizeof(struct node));

    if(newNode==NULL)
    {
        printf("Cant allocate the memory");
        return;
    }
    printf("Enter the data for new node\n");
    scanf("%d", &newNode->id);
    scanf("%s", newNode->name);
    scanf("%s", newNode->surname);
    for(j=0; j<3; j++)
        scanf("%d", &newNode->grade[j]);
    newNode->next=NULL;

    temp=head;

    newNode->next=temp;
    head=newNode;
}

void showList()
{
    int i;
    if(head==NULL)
    {
        printf("No Nodes");
        return;
    }

    struct node *temp;
    temp=head;

    while(temp!=NULL)
    {
        printf("Id: %d, Name: %s, Surname: %s\n", temp->id,temp->name,temp->surname);
        for(i=0; i<3; i++)
            printf("Grade %d = %d\n",i+1,temp->grade[i]);
        temp = temp->next;
    }
}
