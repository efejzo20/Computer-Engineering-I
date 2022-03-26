//efejzo20
#include <stdio.h>
#include <stdlib.h>

typedef struct Students
{
    char name[25];
    char surname[25];
    double ave;
} student;

void getData(int n, student sArr[]);
void selSort(int n, int m, student sArr[]);
void showData(int m, student sArr[]);

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    student sArr[n];
    getData(n,sArr);
    selSort(n,m,sArr);
    showData(m,sArr);

    return 0;
}

void getData(int n, student sArr[])
{
    int i,j,grade;
    for(i=0; i<n; i++)
    {
        scanf("%s%s",sArr[i].name,sArr[i].surname);
        int sum=0;
        for(j=0; j<4; j++)
        {
            scanf("%d",&grade);
            sum+=grade;
        }
        sArr[i].ave=(double)sum/4;
    }
}

void selSort(int n, int m, student sArr[])
{
    int i,j;
    student temp;
    for(i=0; i<m; i++)
    {
        for(j=i; j<n; j++)
        {
            if(sArr[j].ave>sArr[i].ave)
            {
                temp = sArr[i];
                sArr[i]=sArr[j];
                sArr[j] = temp;
            }
        }
    }
}
void showData(int m, student sArr[])
{
    int i;
    for(i=0; i<m; i++)
    {
        printf("%s %s %.2f\n",sArr[i].name,sArr[i].surname,sArr[i].ave);
    }
}
