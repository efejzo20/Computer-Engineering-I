//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
int sec,hour,min,n;
scanf("%d",&n);

hour = n / 3600;
min = (n % 3600)/60;
sec = (n % 3600)- (min*60);

printf("%d %d %d",hour,min,sec);
    return 0;
}
