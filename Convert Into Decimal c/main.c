//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int num;
    int digit,length,base,n=0,i;
    long int num10;
    scanf("%d%d",&length,&base);
    scanf("%ld",&num);

    for(i=0;i<length;i++)
    {
        digit=num%10;
        num10+=(digit*pow(base,n));
        n++;
        num/=10;
    }
    printf("%ld",num10);
    return 0;
}
