//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[12];
    int pass=1234,passw;
    scanf("%s%d",&name,&passw);
    if(passw==pass)
        printf("Welcome %s.",name);
    else
        printf("Sorry %s!",name);

    return 0;
}
