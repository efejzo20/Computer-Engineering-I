//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char stdName[25];

int getIntNum();
void getData(stdName names[], stdName surnames[], double averages[], int numStd);
void showData(stdName names[], stdName surnames[], double averages[], int numStd,int maxIndex);
int searchMax(double averages[] , int n);

int main()
{
	int numStd, maxIndex;
	double averages[100];
	stdName names[100], surnames[100];

	numStd=getIntNum();
    getData(names,surnames,averages,numStd);
    maxIndex=searchMax(averages, numStd);
    showData(names,surnames,averages,numStd,maxIndex);

	return 0;
}

int getIntNum()
{
	int n;
    scanf("%d",&n);
    return n;
}

void getData(stdName names[], stdName surnames[], double averages[], int n)
{
	int i, grade, cnt;
    for(i=0; i<n; i++)
    {
        int cnt=0;
        averages[i]=0;
        scanf("%s%s",&names[i],&surnames[i]);
        do
        {
            scanf("%d",&grade);
            if(grade!=-1)
            {
                averages[i]+=grade;
                cnt++;
            }
        }
        while(grade!=-1);

        if(cnt<4)
            averages[i]/=4;
        else
            averages[i]/=cnt;
    }

}


void showData(stdName names[], stdName surnames[], double averages[], int n,int maxIndex)
{
    int i;
    printf("%s %s %.3lf",names[maxIndex],surnames[maxIndex],averages[maxIndex]);
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
