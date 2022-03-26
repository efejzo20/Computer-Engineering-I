//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct Number
{
    int num;
    struct Number * next;
};
typedef struct Number node;
typedef struct Number *ndPtr;

void builtRandList(ndPtr *First,int n);
void addNodeEnd(ndPtr *First, node n);
void addNodeFront(ndPtr *First, node n);

void printList(ndPtr First);
int getSize(ndPtr First);

void deleteEndNode(ndPtr *First);
void deleteFrontNode(ndPtr *First);
void deleteNodeVal(ndPtr *First,node nd);
void deleteNodeAtPos(ndPtr *First,int pos);
void deleteAll(ndPtr *First);

void insertSorted(ndPtr *First, node n);

void fullscreen();
void displyMenu();



int main()
{

    ndPtr First, tmp;
    First=NULL;
    node nd;
    int i;
    int n;
    while(1)
    {
        displyMenu();

        printList(First);
        printf("\nEnter your choice: ");
        scanf("%d",&i);

        switch(i)
        {

        case 1:


            printf("Enter the number of nodes: ");

            scanf("%d",&n);
            builtRandList(&First,n);
            break;

        case 2:

            printf("Enter the number: ");
            scanf("%d",&nd.num);
            addNodeEnd(&First,nd);
            break;

        case 3:

            printf("Enter the number: ");
            scanf("%d",&nd.num);
            addNodeFront(&First,nd);
            break;

        case 4:

            printf("Enter the number: ");
            scanf("%d",&nd.num);
            insertSorted(&First,nd);
            break;

        case 5:
            deleteEndNode(&First);
            break;

        case 6:
            deleteFrontNode(&First);
            printList(First);
            break;

        case 7:

            printf("Enter the number to be deleted : ");
            scanf("%d",&nd.num);
            deleteNodeVal(&First,nd);
            break;

        case 8:

            printf("Enter the position of the number to be deleted (0 - n-1): ");
            int pos;
            scanf("%d",&pos);
            deleteNodeAtPos(&First,pos);
            break;

        case 9:
            deleteAll(&First);
            system("pause");
            break;

        case 10:
            printList(First);
            system("pause");
            break;

        case 11:

            printf("Size of the list is: %d\n",getSize(First));
            system("pause");
            break;

        case 12:
            return 0;

        default:

            printf(" Invalid option!\n");
            system("pause");
        }

    }
    return 0;
}

void displyMenu()
{
    fullscreen();
    system("cls");
    printf("*********************************\n");
    printf("*        EPOKA UNIVERSITY       *\n");
    printf("*    CEN 110 - C Programming!   *\n");
    printf("*     ==Singly Linked List==    *\n");
    printf("*                               *\n");
    printf("*       List Of Operations      *\n");
    printf("*  ---------------------------  *\n");
    printf("*   1. Built random list.       *\n");
    printf("*   2. Insert to the END        *\n");
    printf("*   3. Insert to the FRONT      *\n");
    printf("*   4. Insert Sorted            *\n");
    printf("*   5. deleteEndNode            *\n");
    printf("*   6. deleteFrontNode          *\n");
    printf("*   7. deleteNodeVal            *\n");
    printf("*   8. deleteNodeAtPos          *\n");
    printf("*   9. deleteAllNodes           *\n");
    printf("*  10. DisplayList              *\n");
    printf("*  11. Size                     *\n");
    printf("*  12. Exit                     *\n");
    printf("*********************************\n");

}



void builtRandList(ndPtr *First,int n)
{
    ndPtr temp, newnode;
    int i;
    for(i=0; i<n; i++)
    {
        newnode=(ndPtr)malloc(sizeof(node));
        newnode->next = rand() % 100;

        if(i=0)
        {
            *First=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    newnode->next=NULL;

}

void addNodeEnd(ndPtr *First, node n)
{
    ndPtr curr, prev;
    n=(ndPtr)malloc(sizeof(node));
    scanf("%d",&n->num);
    n->next=NULL;

    curr=*First;

    while(curr!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr==NULL)
    {
        prev->next=n;
    }

}

void addNodeFront(ndPtr *First, node n)
{
    ndPtr curr, prev;
    n=(ndPtr)malloc(sizeof(node));
    scanf("%d",n->num);
    n->next=NULL;

    curr=*First;
    n->next=curr;
    *First=n;

}

void printList(ndPtr First)
{
    ndPtr temp;
    while(temp!=NULL)
    {
        printf("%d",temp->num);
        temp=temp->next;
    }

}

int getSize(ndPtr First)
{
    int i;
    ndPtr temp;
    while(temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    return i;

}

void deleteEndNode(ndPtr *First)
{



}

void deleteFrontNode(ndPtr *First)
{



}

void deleteNodeVal(ndPtr *First,node nd)
{



}

void deleteNodeAtPos(ndPtr *First,int pos)
{




}
void deleteAll(ndPtr *First)
{
    First->next=NULL;

}


void insertSorted(ndPtr *First, node n)
{
    n=(ndPtr)malloc(sizeof(node));
    scanf("%d",n->num);
    n->next=NULL;
    ndPtr curr, prev;

    if(*First==NULL)
    {
        *First=n;
        return;
    }

    if(curr->ave <= n->ave)
    {
        n->next=curr;
        *First=n;
    }
    else
    {
        while((curr!=NULL)&&(curr->ave > n->ave))
        {
            prev=curr;
            curr=curr->next;
        }
        if(curr==NULL)
        {
            prev->next=n;
        }
        else
        {
            prev->next=n;
            n->next=curr;
        }
    }


}

void fullscreen()
{
    keybd_event(VK_MENU,	0x38,0,	0);
    keybd_event(VK_RETURN,0x1c,	0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
