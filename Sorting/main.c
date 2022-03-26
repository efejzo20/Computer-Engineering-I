//efejzo20
#include <stdio.h>
#include <stdlib.h>

int getIntNum();
void getData(int n,int arr[]);
void showData(int n,int arr[]);
void selSort(int n,int arr[]);

int main()
{

  int n,arr[100];
  n=getIntNum();
  getData(n,arr);
  selSort(n,arr);
  showData(n,arr);

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

void showData(int n,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void selSort(int n,int arr[])
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
