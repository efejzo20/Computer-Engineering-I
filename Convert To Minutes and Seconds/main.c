//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int min,sec;
    scanf("%d",&n);
    min=n/60;
    sec=n-min*60;
    printf("%dminutes %dseconds",min,sec);

    return 0;
}
