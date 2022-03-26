//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int calcPrcCost(int Numbers[],int m);

int main()
{
    int m,n,i,j;
    int Numbers[20000];
    int prcCost, minPrcCost=INT_MAX;

    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    fscanf(infile,"%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            fscanf(infile,"%d",&Numbers[j]);
        }
        prcCost=calcPrcCost(Numbers,m);
        if(prcCost<minPrcCost)
            minPrcCost=prcCost;
    }
    printf("%d",minPrcCost);

    fclose(infile);
    return 0;
}
int calcPrcCost(int Numbers[],int m)
{
    int maxElm=Numbers[0];
    int i;
    int cost=0;
    for(i=1;i<m;i++)
        if(Numbers[i]>maxElm)
            maxElm=Numbers[i];

    for(i=0;i<m;i++)
        cost+=(maxElm-Numbers[i]);

    return cost;
}
