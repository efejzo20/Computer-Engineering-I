//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double elipseArea(int a, int b);
double traArea(int a, int b, int h);
double hexArea(int a);

int main()
{
    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    int i,n,num;
    int a,b,h;
    double area, totArea=0,bigArea1=-1,bigArea2=-1,bigArea3=-1;

    fscanf(infile,"%d",&n);
    for(i=0; i<n; i++)
    {
        fscanf(infile,"%d",&num);
        if(num==1)
        {
            fscanf(infile,"%d%d",&a,&b);
            area=elipseArea(a,b);
            if(area>bigArea1)
                bigArea1=area;
        }
        if(num==2)
        {
            fscanf(infile,"%d%d%d",&a,&b,&h);
            area=traArea(a,b,h);
            if(area>bigArea2)
                bigArea2=area;
        }
        if(num==3)
        {
            fscanf(infile,"%d",&a);
            area=hexArea(a);
            if(area>bigArea3)
                bigArea3=area;
        }
        totArea+=area;
    }
    printf("%.2f ",totArea);
    if(bigArea1>bigArea2 && bigArea1>bigArea3)
        printf("1");
    else if(bigArea2>bigArea3)
        printf("2");
    else
        printf("3");

    fclose(infile);
    return 0;
}

double elipseArea(int a, int b)
{
    return 3.14159*a*b;
}

double traArea(int a, int b, int h)
{
    return (a+b)/2.0*h;
}
double hexArea(int a)
{
    return (3*1.732)/2*a*a;
}
