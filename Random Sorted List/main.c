
//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    FILE *infile;
    int n,k,i;
    int randNum;
    int listElm=0;

    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    fscanf(infile,"%d%d",&n,&k);

    for(i=0;i<n;i++)
    {

        randNum=rand()%k;
        listElm+=randNum;
        printf("%d ",listElm);
    }


    return 0;
}


