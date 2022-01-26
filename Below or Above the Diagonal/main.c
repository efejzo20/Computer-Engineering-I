//efejzo20
#include <stdio.h>
#include <stdlib.h>
int sumAbove(int n,int m,int Arr[][m]);
void readArr(int n,int m,int Arr[][m]);
int sumBelow(int n,int m,int Arr[][m]);

int main()
{
    int m,n,sumA,sumB;

    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);

    int A[n][m];

    printf("Enter array elements:\n");
    readArr(n,m,A);
    sumA=sumAbove(n,m,A);
    sumB=sumBelow(n,m,A);

    if(sumA>sumB)
        printf("ABOVE");
    else
        printf("BELOW");

    return 0;
}
void readArr(int n,int m,int Arr[][m])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf("%d",&Arr[i][j]);
    }
}

int sumAbove(int n,int m,int Arr[][m])
{
    int i,j,sum=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i<j)
                sum+=Arr[i][j];
        }
    }
    return sum;
}

int sumBelow(int n,int m,int Arr[][m])
{
    int i,j,sum=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i>j)
                sum+=Arr[i][j];
        }
    }
    return sum;
}
