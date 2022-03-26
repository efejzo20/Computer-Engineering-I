//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,a1,a2,b1,b2,sum=0,i,j;
    scanf("%d%d",&row,&col);
    int arr[row][col];

    scanf("%d%d%d%d",&a1,&a2,&b1,&b2);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    sum=arr[a1-1][a2-1]+arr[b1-1][b2-1];
    printf("%d",sum);


    return 0;
}
