//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char stdName[25];

int getIntNum();
void getData(int n,stdName names[], double averages[]);
void showData(int maxIndex,stdName names[], double averages[]);
int searchMax(double averages[], int n);

int main()
{
    int numStd,maxIndex;
    double averages[100];
    stdName names[100];

    numStd=getIntNum();
    getData(numStd,names, averages);
    maxIndex=searchMax(averages, numStd);
    showData(maxIndex,names, averages);

    return 0;
}

int getIntNum()
{
    int n;
    scanf("%d",&n);
    return n;
}

void getData(int n,stdName names[], double averages[])
{
    int i, grade, cnt;
    for(i=0; i<n; i++)
    {
        int cnt=0;
        averages[i]=0;
        scanf("%s",names[i]);
        do
        {
            scanf("%d",&grade);
            if(grade!=-999)
            {
                averages[i]+=grade;
                cnt++;
            }
        }
        while(grade!=-999);

        averages[i]/=cnt;
    }

}


void showData(int maxIndex,stdName names[], double averages[])
{
     printf("%s %.3lf",names[maxIndex],averages[maxIndex]);
}

int searchMax(double averages[] , int n)
{
    int maxindex,i,max=-1;
    for(i=0; i<n; i++)
    {
        if(averages[i]>max)
        {
            max=averages[i];
            maxindex=i;
        }
    }
    return maxindex;
}
