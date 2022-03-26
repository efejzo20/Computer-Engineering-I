//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,mass,qunt,i,totW=0;
    FILE *infile;

    infile=fopen("input.txt","r");
    if(infile == NULL)
        exit(1);
    fscanf(infile,"%d",&n);

    for(i=0; i<n; i++)
    {
        fscanf(infile,"%d",&mass);
        fscanf(infile,"%d",&qunt);
        totW+=(mass*qunt);
    }
    printf("%d",totW);

    return 0;
}
