//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *infile;
    int n,i,num,max;

    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);
    fscanf(infile,"%d",&n);
    fscanf(infile,"%d",&num); //max
    max=num;

    for(i=0;i<n-1;i++)
    {
        fscanf(infile,",%d",&num);
        if(num>max)
            max=num;
    }
    printf("%d",max);

    return 0;
}
