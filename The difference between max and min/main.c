//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr[10000],n;
    int min=10001,max=-10001;

    scanf("%d",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%d",max-min);

    return 0;
}
