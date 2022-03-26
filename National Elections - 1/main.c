//efejzo20
#include <stdio.h>
#include <stdlib.h>

typedef struct Voter
{
    char name[25];
    char surname[25];
    int id;

}vot;

void getData(int n, vot voters[]);
void merge(vot voters1[],vot voters2[],vot voters3[],int n, int m);
void selSort(int n, vot voters3[]);
void showData(int k, vot voters[]);

void getData(int n, vot voters[])
{
    int i;
    for(i=0;i<n;i++)
        scanf("%s%s%d",voters[i].name,voters[i].surname,&voters[i].id);
}

void merge(vot voters1[],vot voters2[],vot voters3[],int n, int m)
{
    int i;
    for(i=0; i<n+m ;i++)
    {
        if(i<n)
            voters3[i]=voters1[i];
        else
            voters3[i]=voters2[i-n];
    }
}

void selSort(int n, vot voters3[])
{
    int i,j;
    vot temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i; j<n; j++)
        {
            if(voters3[j].id<voters3[i].id)
            {
                temp = voters3[i];
                voters3[i]=voters3[j];
                voters3[j] = temp;
            }
        }
    }
}

void showData(int k, vot voters[])
{
    printf("%s %s %d",voters[k-1].name,voters[k-1].surname,voters[k-1].id);
}

int main()
{
    int n,m,k;
    int l;
    scanf("%d%d",&n,&k);
    vot voters1[5000];
    getData(n,voters1);

    scanf("%d",&m);
    vot voters2[5000],voters3[10000];
    getData(m,voters2);

    merge(voters1,voters2,voters3,n,m);
    l=n+m;
    selSort(l, voters3);
    showData(k,voters3);

    return 0;
}
