//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    char c;

    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);
    fscanf(infile,"%d%c%c",&n,&c,&c);

     for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c ",c);
        printf("\n");
    }
    fclose(infile);

    return 0;
}
