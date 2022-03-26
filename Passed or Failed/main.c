//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1, grade2, grade3;
    float ave;

    scanf("%d%d%d",&grade1,&grade2,&grade3);

    ave=(grade1+grade2+grade3)/3.0;

    if(ave>60)
        printf("Passed");
    else
        printf("Failed");


    return 0;
}
