//efejzo20
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[25];
    char surname[25];
    double ave;
};

void getData(int n, struct Student sArr[]);
struct Student searchMax(int n, struct Student sArr[]);
void  PrintMax(struct Student maxStd);

int main()
{
    int i,n,index;
    struct Student sArr[100];
    struct Student maxStd;
    scanf("%d",&n);

    getData(n,sArr);

    maxStd=searchMax(n,sArr);

    PrintMax(maxStd);

    return 0;
}

void getData(int n, struct Student sArr[])
{
    int grade,cnt=0,i,sum;
    for(i=0;i<n;i++)
    {
        scanf("%s%s",sArr[i].name, sArr[i].surname);

        sum=0;
        cnt=0;
        while(1)
        {
            scanf("%d",&grade);
            if(grade==-1)
                break;
            sum+=grade;
            cnt++;
        }

        if(cnt<4)
            cnt=4;

        sArr[i].ave=(double)sum/cnt;
    }

}

struct Student searchMax(int n, struct Student sArr[])
{
    struct Student maxStd;
    int i;

    maxStd=sArr[0];
    for(i=1;i<n;i++)
    {
        if(sArr[i].ave>maxStd.ave)
        {
            maxStd=sArr[i];
        }
    }
    return maxStd;
}

void PrintMax(struct Student maxStd)
{
    printf("%s ", maxStd.name);
    printf("%s ", maxStd.surname);
    printf("%.2lf ", maxStd.ave);
}
