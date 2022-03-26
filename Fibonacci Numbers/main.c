//efejzo20
#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int x);

int main()
{
    int x; scanf("%d",&x);
    printf("%d",Fibonacci(x+1));
    return 0;
}
int Fibonacci(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return Fibonacci(x-1)+Fibonacci(x-2);
}
