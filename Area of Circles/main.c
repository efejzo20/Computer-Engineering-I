//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include "utils/areaofCircle.h"


int main()
{
    int radius;
    double area;

    do
    {
        radius = getRadius();
        area =  Area(radius);
        showResult(area);
    }
    while(Continue());


    return 0;
}
