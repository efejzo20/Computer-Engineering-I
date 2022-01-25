//efejzo20
#include <stdio.h>
#include <stdlib.h>

typedef struct Students
{
    char name[25];
    char surname[15];
    double ave;
} student;

void getData(int n, student sArr[]);
void selSort(int n, student sArr[]);
void showData(int k, student sArr[]);

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    student sArr[n];
    getData(n,sArr);
    selSort(n,sArr);
    showData(k,sArr);

    return 0;
}

void getData(int n, student sArr[])
{
    int i,j,grade;
    for(i=0; i<n; i++)
    {
        scanf("%[^;]; %[^;];",sArr[i].name,sArr[i].surname);
        int sum=0;
        for(j=0; j<4; j++)
        {
            scanf("%d",&grade);
            sum+=grade;
        }
        sArr[i].ave=(double)sum/4;
    }
}

void selSort(int n, student sArr[])
{
    int i,j;
    student temp;
    for(i=0; i<n-1; i++)
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
void showData(int k, student sArr[])
{
    printf("%s %s %.2f",sArr[k-1].name,sArr[k-1].surname,sArr[k-1].ave);
}
