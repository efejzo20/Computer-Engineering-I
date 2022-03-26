//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    FILE *infile;

    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);
    fscanf(infile,"%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    fclose(infile);
    return 0;
}
