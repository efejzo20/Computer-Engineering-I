//efejzo20
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int id;
    struct node *next;
};

void insertnode(struct node **head);
void deletenode(struct node **head);
void Print(struct node *head);

int main()
{
    int n, m,i,j;
    char c, space;
    scanf("%d", &n);

    struct node *head;

    for(i=0; i<n; i++)
    {
        scanf("%c%c%d",&space, &c, &m);
        if(c=='P')
        {
            for(j=0; j<m; j++)
            {
                insertnode(&head);
            }
        }
        else
        {
            for(j=0; j<m; j++)
            {
                deletenode(&head);
            }
        }

    }

    Print(head);
    return 0;
}

void insertnode(struct node **head)
{
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d", &newnode->id);

    newnode->next=*head;
    *head=newnode;
}

void deletenode(struct node **head)
{
    struct node *temp;

    temp=*head;
    *head=temp->next;
    free(temp);
}

void Print(struct node *head)
{
    struct node *temp;
    temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->id);
        temp=temp->next;
    }

}
