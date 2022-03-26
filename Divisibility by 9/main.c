//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;
    int intValue;
    int sum=0;

    do
    {
       scanf("%c",&c);
       if(c != ';')
       {
           intValue = c - '0';
           sum+=intValue;
       }

    }while(c != ';');

    printf("%d",sum%9);

    return 0;
}
