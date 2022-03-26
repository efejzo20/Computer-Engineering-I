//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    FILE *infile;
    int n,m,i;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);
    int randNum;
    int min,max;

    fscanf(infile,"%d%d",&m,&n);
    min= -1*n;
    max=n;

    srand(time(0));

    for(i=0;i<m;i++){
    randNum=rand()%(max-min+1)+min;
    printf("%d ",randNum);}

    return 0;
}
