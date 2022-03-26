//efejzo20
#include <stdio.h>
#include <stdlib.h>
int sumUpper(int n,int m,int Arr[][m]);
void readArr(int n,int m,int Arr[][m]);

int main()
{
    int m,n,sum;

    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);

    int A[n][m];

    printf("Enter array elements:\n");
    readArr(n,m,A);
    sum=sumUpper(n,m,A);
    printf("The summation of the elements above the main diagonal is: ");
    printf("%d",sum);

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

int sumUpper(int n,int m,int Arr[][m])
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
