//efejzo20
#include <stdio.h>
#include <stdlib.h>

int getIntNum();
void getData(int n,int arr[]);
void selSort(int n,int arr[]);

int main()
{
    int n,arr[100];
    // get the number of elements
    n = getIntNum();
    // read all elements
    getData(n,arr);
    // sort the array
    selSort(n,arr);
    // print numbers

    if(arr[0]*arr[1]>arr[n-1]*arr[n-2])
        printf("%d %d",arr[0],arr[1]);
    else
        printf("%d %d",arr[n-2],arr[n-1]);

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
    for(i=0;i<n;i++)
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
