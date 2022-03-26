//efejzo20
#include <stdio.h>
#include <stdlib.h>

int getIntNum();
void getData(int n,int arr[]);
void selSort(int n,int arr[]);

int main()
{
    int n,i,arr[100];
    n = getIntNum();
    getData(n,arr);

    if(n==3)
    {
        for(i=0; i<n; i++)
            printf("%d ",arr[i]);
    }
    else
    {
        selSort(n,arr);
        if(arr[0]*arr[1]*arr[n-1]>arr[n-1]*arr[n-2]*arr[n-3])
            printf("%d %d %d",arr[n-1],arr[0],arr[1]);
        else
            printf("%d %d %d",arr[n-3],arr[n-2],arr[n-1]);
    }

    return 0;
}

int getIntNum()
{
    int n;
    scanf("%d",&n);

    return n;
}

void getData(int n,int arr[])
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

}

void selSort(int n, int arr[])

{
    int i, j, temp;
    for (i = 0; i<n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j]<arr[min])
                min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
