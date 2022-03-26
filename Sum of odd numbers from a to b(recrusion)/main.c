//efejzo20
#include <stdio.h>
#include <stdlib.h>
int Sum(int a, int b);

int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    if(a%2==0)
        a++;

    printf("%d",Sum(a,b));

    return 0;
}
int Sum(int a, int b)
{
    if(a>b)
        return 0;
    return a+Sum(a+2,b);
}

