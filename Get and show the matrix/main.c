//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j;

    printf("Enter rows:");
    scanf("%d",&n);
    printf("Enter columns:");
    scanf("%d",&m);

    int a[n][m];

    printf("Enter the elements:");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);

        }
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
