//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>

double getArea(int sideA,int sideB, int angle);

int main()
{
    FILE *infile;
    FILE *sides;

    int n,i,sideA,sideB,angle;
    double area, totArea=0;
    double smallArea;
    smallArea=getArea(500,500,90);

    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    sides=fopen("sides.txt","w");
    if(infile==NULL)
        exit(2);

    fscanf(infile,"%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(infile,"%d%d",&sideA,&sideB);
        fprintf(sides,"%d %d\n",sideA,sideB);
    }
    fclose(sides);
    sides=fopen("sides.txt","r");
    if(infile==NULL)
        exit(3);

    for(i=0;i<n;i++)
    {
        fscanf(infile,"%d",&angle);

        fscanf(sides,"%d%d",&sideA,&sideB);

       area=getArea(sideA,sideB,angle);
       totArea+=area;
       if(area<smallArea)
            smallArea=area;
    }
    printf("%.2lf %.2lf\n",totArea, smallArea);


    fclose(sides);
    fclose(infile);
    return 0;
}
double getArea(int sideA,int sideB, int angle)
{
    return(sideA*sideB*sin(M_PI/180*angle))/2.0;
}
