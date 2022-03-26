//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int intValue;
    int sumOdd=0,sumEven=0;
    int index=1;
    int diff;

    do
    {
        scanf("%c",&c);
        if(c != ';')
        {
            intValue = c - '0';
            if(index%2==1)
                sumOdd+=intValue;
            else
                sumEven+=intValue;

            ++index;
        }

    }while(c != ';');

    diff=sumOdd-sumEven;

    if(diff==0 || diff%11==0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
