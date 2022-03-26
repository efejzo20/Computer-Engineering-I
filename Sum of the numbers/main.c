//efejzo20
#include <stdio.h>
#include <stdlib.h>
int calcSum(int Arr[],int a, int b);
void printA2B(int Arr[],int a,int b);

int main()
{
    int n,a,b,i,sum;
    int Numbers[10000];

    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    fscanf(infile,"%d%d%d",&n,&a,&b);
     for(i=0 ; i<n; i++)
    {
        fscanf(infile,"%d",&Numbers[i]);
    }
    sum=calcSum(Numbers,a,b);
    printf("%d\n",sum);

    printA2B(Numbers,a,b);

    fclose(infile);
    return 0;
}
int calcSum(int Arr[],int a, int b)
{
    int sum=0,i;
    for(int i=a-1;i<b;i++)
        sum+=Arr[i];
    return sum;
}
void printA2B(int Arr[],int a,int b)
{
    int i;
    for(i=a-1;i<b;i++)
        printf("%d ",Arr[i]);
    return;

}
