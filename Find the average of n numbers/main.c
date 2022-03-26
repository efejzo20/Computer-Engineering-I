//efejzo20
#include <stdio.h>
#include <stdlib.h>
int calcAve(int Arr[],int n);

int main()
{
    int n,num,i,ave;
    int Numbers[100];

    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    fscanf(infile,"%d",&n);

    for(i=0 ;i<n; i++)
    {
        fscanf(infile,"%d",&Numbers[i]);
        //fscanf(infile,"%d",&num);
        //Numbers[i]=num;
    }

    ave=calcAve(Numbers,n);
    printf("%d",ave);

    fclose(infile);
    return 0;
}

int calcAve(int Arr[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=Arr[i];

    return sum/n;
}
