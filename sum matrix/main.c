//efejzo20
#include <stdio.h>
#include <stdlib.h>
void getSum(int n,int m, int a[n][m],int b[n][m],int c[n][m])

int main()
{

    return 0;
}
void getSum(int n,int m, int a[n][m],int b[n][m],int c[n][m])
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
