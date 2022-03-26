//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[1000],x,i=0;

    do
    {
        scanf("%d",&x);
        if(x>0)
        {
            list[i]=x;
            i++;
        }
        else
            break;

    }while(x>0);

    int n=i;
    int list2[n], a=0;

    for(i=0;i<n;i++)
    {
        if(list[i]%2==0)
            {
            list2[a]=list[i];
            a++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(list[i]%2 != 0)
        {
            list2[a]=list[i];
            a++;
        }
    }

    for(i=0;i<n;i++)
    {
        list[i]=list2[i];
        printf("%d ",list[i]);
    }

    return 0;

}
