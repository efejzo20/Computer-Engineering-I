//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;

    FILE *infile;

    infile=fopen("input.txt","r");

    if(infile==NULL)
        exit(1);
    fscanf(infile,"%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==1||i==j||j==n)
            {
                printf("N");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    fclose(infile);
    return 0;
}
