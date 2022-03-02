//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cm;
    int yard,feet,inch;
    scanf("%f",&cm);
    int i,dif;
    i=cm/2.54;
    yard=i/36;
    dif=i-yard*36;
    feet=dif/12;
    inch=dif-12*feet;
    printf("%d %d %d",yard,feet,inch);

    return 0;
}
