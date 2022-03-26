//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j;
    FILE *infile;
    infile=fopen("input.txt","r");

    if(infile==NULL)
        exit(1);
    fscanf(infile,"%d %d",&n,&k);


    for(i=1;i<=n;i++)
    {
        j=k;

        while(j<k+n)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        k++;

    }

    fclose(infile);

    return 0;
}
