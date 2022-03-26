//efejzo20
#include <stdio.h>
#include <stdlib.h>
int findMax(int num[],int n);
void getData(int num[],int n);
int Max(int a, int b);

int main()
{
    int num[100],n;
    scanf("%d",&n);
    getData(num,n);

    return 0;
}

void getData(int num[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    printf("%d",findMax(num, n-1));
}

int Max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int findMax(int num[],int n)
{
    if(n==0)
        return num[n];
    return Max(num[n], findMax(num,n-1));
}
