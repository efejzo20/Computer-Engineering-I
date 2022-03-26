//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char text[251];
    int upper=0,lower=0,i;
    gets(text);

    while(text[i] != '\0')
    {
        if(isupper(text[i]))
            upper++;

        else if(islower(text[i]))
            lower++;

        i++;
    }
    printf("%d %d",upper,lower);
    return 0;
}
