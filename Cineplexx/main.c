//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int newStart1,newStart2,newEnd1,newEnd2,exStart1,exStart2,exEnd1,exEnd2;
    int n,i=1;
    int newStart,newEnd,exStart,exEnd;
    // 1 for hh; 2 for mm
    scanf("%d",&newStart1);
    scanf("%d",&newStart2);
    scanf("%d",&newEnd1);
    scanf("%d",&newEnd2);
    scanf("%d",&n);
    //convert time into minutes
    if(newStart1==00)
        newStart1=24;
    else if(newEnd1==00)
        newEnd1=24;
    newStart=newStart1*60+newStart2;
    newEnd=newEnd1*60+newEnd2;

    while(i<=n)
    {
        scanf("%d",&exStart1);
        scanf("%d",&exStart2);
        scanf("%d",&exEnd1);
        scanf("%d",&exEnd2);

        if(exStart1==00)
            exStart1=24;
        else if(newEnd1==00)
            exEnd1=24;

        exStart=exStart1*60+exStart2;
        exEnd=exEnd1*60+exEnd2;

        if(!(newStart<=exEnd || newEnd<=exStart))
        {
            printf("PO");
            break;
        }
        else
            continue;
    printf("JO");

        i=i+1;
    }

    return 0;
}
