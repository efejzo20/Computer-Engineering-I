//efejzo20
#include <stdio.h>
#include <stdlib.h>

struct Number
{
    int num;
    int grade;
    char c;
    struct Number *next;
};

typedef struct Number node;
typedef struct Number *ndPtr;

int main()
{
    //struct Number *First, *Last, *newNode;
    ndPtr First, Last, newNode;
    First=NULL;


    newNode=(ndPtr)malloc(sizeof(node));
    First=newNode;
    Last=newNode;
    //printf("%d\n",sizeof(node));
    newNode->num=5;
    //printf("num=%d",newNode->num);
    newNode->grade=9.5;
    newNode->c='a';
    newNode->next=NULL;




    newNode=(ndPtr)malloc(sizeof(node));
    newNode->num=54;
    newNode->grade=9;
    newNode->c='b';
    newNode->next=NULL;

    Last->next=newNode; // address of newNode e ruajm te pointer
    Last=newNode;




    newNode=(ndPtr)malloc(sizeof(node));
    newNode->num=17;
    newNode->grade=10;
    newNode->c='a';
    newNode->next=NULL;

    Last->next=newNode;
    Last=newNode;



    ndPtr temp;
    temp=First;

    return 0;
}
