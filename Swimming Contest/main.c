//efejzo20
#include <stdio.h>
#include <string.h>


int main(void)
{
    int n ,m,k,j, i, x;

    scanf("%d%d%d" ,&n ,&m ,&k);
    x=k*n;

    char name[x][25],winner[25];
    double sum, min, max,arr[m],sumA[x];

    for(i=0;i<x;i++)
    {
        sum=0,min=99999999,max=-99999999;
        scanf("%s",name[i]);

        for(j=0;j<m;j++)
        {
            scanf("%lf",&arr[j]);
            sum=sum+arr[j];
            if(arr[j]>max)
               max=arr[j];
            if(arr[j]<min)
               min=arr[j];
        }

       sumA[i]=sum-max-min;
    }

     max=-9999999;
     for(i=0;i<n;i++)
    {
         int nr=i;
         for(j=1;j<k;j++)
        {
             nr=nr+n;
             sumA[i]=sumA[i]+sumA[nr];
        }

      sumA[i]=(float)sumA[i]/k*(m-2);

      if(sumA[i]>max)
      {
        max=sumA[i];
        strcpy(winner,name[i]);
      }

  }

  printf("%s",winner);
  return 0;
}
