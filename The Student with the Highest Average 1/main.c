//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int gr1,gr2;
    float ave;
    char name[16];
    char maxName[16];
    float maxAve=-1;
    int i,n=3;

    for(i=0; i<n; i++)
    {
        scanf("%s%d%d",name,&gr1,&gr2);
        ave=(float)(gr1+gr2)/2;

        if(ave>maxAve)
        {
            strcpy(maxName,name);
            maxAve=ave;
        }

    }
    printf("%s %f",maxName,maxAve);

    return 0;
}
