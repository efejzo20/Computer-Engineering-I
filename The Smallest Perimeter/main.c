//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double circleP(int a);
double recP(int a, int b);
double triP(int b,int h);

int main()
{
    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    int i,n,num;
    int a,b,h;
    double P, totP=0,smallP1=99999999999999999999,smallP2=99999999999999999999,smallP3=99999999999999999999;

    fscanf(infile,"%d",&n);
    for(i=0; i<n; i++)
    {
        fscanf(infile,"%d",&num);
        if(num==1)
        {
            fscanf(infile,"%d",&a);
            P=circleP(a);
            if(P<smallP1)
                smallP1=P;

        }
        if(num==2)
        {
            fscanf(infile,"%d%d",&a,&b);
            P=recP(a,b);
            if(P<smallP2)
                smallP2=P;

        }
        if(num==3)
        {
            fscanf(infile,"%d%d",&b,&h);
            P=triP(b,h);
            if(P<smallP3)
                smallP3=P;

        }
        totP+=P;
    }
    printf("%.2f ",totP);
    if(smallP1<smallP2&&smallP1<smallP3)
        printf("%.2f",smallP1);
    else if(smallP2<smallP3)
        printf("%.2f",smallP2);
    else
        printf("%.2f",smallP3);

    fclose(infile);
    return 0;
}

double circleP(int a)
{
    return 2*3.14159*a;
}

double recP(int a, int b)
{
    return (a+b)*2.0;
}
double triP(int b,int h)
{
    double a,s;
    s=((b*b)/4.0+h*h);
    a=sqrt(s);
    return 2*a+b;
}
