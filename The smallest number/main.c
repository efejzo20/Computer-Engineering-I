//efejzo20
#include <stdio.h>
#include <stdlib.h>
int findMin(int num[],int n);
void getData(int num[]);
int Min(int a, int b);

int main()
{
    int num[10];
    getData(num);

    return 0;
}

void getData(int num[])
{
    int i;
    for(i=0;i<10;i++)
        scanf("%d",&num[i]);

    printf("%d",findMin(num, 9));
}

int Min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int findMin(int num[],int n)
{
    if(n==0)
        return num[n];
    return Min(num[n], findMin(num,n-1));
}
