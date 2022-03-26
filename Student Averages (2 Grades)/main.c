//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    char name[25];
    int g1,g2;
    float ave;

    while(i<n)
    {
        scanf("%s%d%d",name,&g1,&g2);
        ave=(g1+g2)/2.0;
        printf("%s %.2f\n",name,ave);
        i++;
    }


    return 0;
}
