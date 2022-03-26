//efejzo20
#include <stdio.h>
#include <stdlib.h>
void selSort(int n,int arr[]);

int main()
{
    int n,x,cnt,i,j;
    scanf("%d%d",&n,&x);
    int list[200000];

    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }

    selSort(n,list);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(list[i]+list[j]==x)
                cnt++;
        }
    }

    printf("%d",cnt);

    return 0;
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
