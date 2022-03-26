//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i,j,space,coef=1;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(space=1; space<=n-i; space++)
            printf("  ");
        for(j=0; j<=i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);
        }
        printf("\n");
    }

    return 0;
}
