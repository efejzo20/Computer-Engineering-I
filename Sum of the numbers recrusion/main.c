//efejzo20
#include <stdio.h>
#include <stdlib.h>
void getData(int num[],int n);
int Sum(int num[],int a, int b);
void Print(int num[],int a, int b);

int main()
{
    int num[10000];
    int sum,n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    getData(num,n);
    sum=Sum(num,a-1,b-1);
    printf("%d\n",sum);

    Print(num,a-1,b-1);

    return 0;
}
void getData(int num[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
}

int Sum(int num[],int a, int b)
{
    if(a==b)
        return num[a];
    else
        return num[b]+ Sum(num,a,b-1);
}

void Print(int num[],int a, int b)
{

    if(b>a)
        Print(num,a,b-1);
    printf("%d ",num[b]);
}

