//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float price;
    scanf("%d",&n);
    int sec;
    float sec1;

    if(n<=180)
        price=6;
    else
    {
        sec=(n-180)/10;
        sec1=(n-180)/10.0;
        if(sec1>sec)
        {
            price=sec*0.5+6+0.5;
        }
        else
            price=sec*0.5+6;
    }

    printf("%f",price);


    return 0;
}
