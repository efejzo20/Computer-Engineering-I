//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j,num;

    printf("Enter rows:");
    scanf("%d",&n);
    printf("Enter columns:");
    scanf("%d",&m);
    printf("Enter the column to find max");
    scanf("%d",&num);

    int a[n][m];

    printf("Enter the elements:");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);

        }
    }


    int max=a[0][num-1];

    for(i=0; i<n; i++)
    {
        if(a[i][num-1]>max)
            max=a[i][num-1];
    }

    printf("%d",max);

    return 0;
}
