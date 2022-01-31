//efejzo20
#include <stdio.h>
#include <stdlib.h>
double getPrc(int num,double prc,double shPrc,double shPrc2);

int main()
{
    FILE *infile;

    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);
    int n,num,i;
    double prc,shPrc,shPrc2;
    double price,sum=0;
    fscanf(infile,"%d",&n);

    for(i=0;i<n;i++)
    {
        fscanf(infile,"%d",&num);
        fscanf(infile,"%lf%lf%lf",&prc,&shPrc,&shPrc2);
        price=getPrc(num,prc,shPrc,shPrc2);
        sum+=price;
    }
    printf("%.2lf",sum);


    return 0;
}
double getPrc(int num,double prc,double shPrc,double shPrc2)
{
    double ship,price;
    if(num>1)
        ship=shPrc2*num;
    else
        ship=shPrc;
    price=ship+(num*prc);

    return price;
}
