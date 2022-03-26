//efejzo20
#include <stdio.h>
#include <stdlib.h>
void readArray(int arr[],int n);
void CalcSum(int arr1[],int arr2[],int n);

int main()
{
    int n;
    int list1[10000],list2[10000];
    int sum,i;

    scanf("%d",&n);

    readArray(list1,n);
    readArray(list2,n);
    CalcSum(list1,list2,n);
    return 0;
}

void readArray(int list1[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&list1[i]);
    }
}

void CalcSum(int arr1[],int arr2[],int n)
{
    int i,sum;
    for(i=0; i<n; i++)
    {
        sum=arr1[i]+arr2[i];
        printf("%d ",sum);
    }
}


