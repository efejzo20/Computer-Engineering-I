//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getBestStuents(int n, int mark[],float ave[],char name[600][25],char surname[600][25]);
void selSort(int n,float ave[],char name[600][25], char surname[600][25]);
void showData(int m,int n,char name[600][25], char surname[600][25], float ave[]);

int main()
{
    int n,m;
    char name[600][25],surname[600][25];
    int mark[5];
    float ave[600];

    scanf("%d%d",&n,&m);
    getBestStuents(n,mark,ave,name,surname);
    selSort(n,ave,name,surname);
    showData(m,n,name,surname,ave);


    return 0;
}


void getBestStuents(int n, int mark[],float ave[],char name[600][25],char surname[600][25])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        ave[i]=0;
        float sum=0;
        scanf("%s%s",name[i],surname[i]);
        for(j=0;j<4;j++)
        {
            scanf("%d",&mark[j]);
            sum+=mark[j];
        }
        ave[i]=sum/4.0;
    }
}

void selSort(int n,float arr[],char name[600][25], char surname[600][25])
{
  int i, j;
  float tempG;
  char tempN[25],tempS[25];

  for (i = 0; i<n - 1; i++)
  {
    int min = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j]<arr[min])
        min = j;
    }
    tempG = arr[min];
    arr[min] = arr[i];
    arr[i] = tempG;

    strcpy(tempN,name[min]);
    strcpy(name[min],name[i]);
    strcpy(name[i],tempN);

    strcpy(tempS,surname[min]);
    strcpy(surname[min],surname[i]);
    strcpy(surname[i],tempS);

  }
}

void showData(int m,int n,char name[600][25], char surname[600][25], float ave[])
{
    int i;
    for(i=n-1;i>=n-m;i--)
    {
        printf("%s %s %.2f\n",name[i],surname[i],ave[i]);
    }
}
