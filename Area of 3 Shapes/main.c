//efejzo20
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846

int main()
{
    int r;
    int base,h;
    int a,b;
    double area1,area2,area3;

    scanf("%d%d%d%d%d",&r,&base,&h,&a,&b);
    area1=PI*r*r;
    area2=base*h/2.0;
    area3=a*b;

    if(area1>area2 && area1>area3)
        printf("%.2lf",area1);
    else if(area2>area3)
        printf("%.2lf",area2);
    else
        printf("%.2lf",area3);

    return 0;
}
