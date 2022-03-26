//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    char name[31],surname[31];
    int q1,q2,ex1,ex2,f;
    float ave;
    int j=0,min=200;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s%s%d%d%d%d%d",name,surname,&q1,&q2,&ex1,&ex2,&f);
        ave=round(q1*0.05+q2*0.05+ex1*0.25+ex2*0.25+f*0.4);

        if(ave<60)
            j++;
        if(ave<min)
            min=ave;
    }
    printf("%d",j);


    return 0;
}
