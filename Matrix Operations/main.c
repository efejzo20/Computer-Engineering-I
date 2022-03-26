//efejzo20
#include <stdio.h>
#include <stdlib.h>
void readArr(int m,int n,int Arr[][n]);
void sumArr(int m,int n,int Arr1[][n],int Arr2[][n],int Arr3[][n]);
void printArr(int m,int n,int Arr[][n]);

int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    int first[101][101],second[101][101],sum[101][101];

    readArr(m,n,first);
    readArr(m,n,second);
    sumArr(m,n,first,second,sum);
    printArr(m,n,sum);


    return 0;
}
void readArr(int m,int n,int Arr[][n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&Arr[i][j]);
    }
}

void sumArr(int m,int n,int Arr1[][n],int Arr2[][n],int Arr3[][n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            Arr3[i][j]=Arr1[i][j]+Arr2[i][j];
    }
}

void printArr(int m,int n,int Arr[][n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",Arr[i][j]);
        printf("\n");
    }
}
