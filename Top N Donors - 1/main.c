//efejzo20
#include <stdio.h>
#include <stdlib.h>

typedef struct Donors
{
    char name[25];
    char surname[25];
    double money;
} donors;

void getData(int n, donors Arr[]);
void selSort(int n, int m, donors Arr[]);
void showData(int m, donors Arr[]);

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    donors Arr[n];
    getData(n,Arr);
    selSort(n,m,Arr);
    showData(m,Arr);

    return 0;
}

void getData(int n, donors Arr[])
{
    int i;
    for(i=0; i<n; i++)
        scanf("%s%s%lf",Arr[i].name, Arr[i].surname, &Arr[i].money);

}

void selSort(int n, int m, donors Arr[])
{
    int i,j;
    donors temp;
    for(i=0; i<m; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(Arr[j].money>Arr[i].money)
            {
                temp = Arr[i];
                Arr[i]=Arr[j];
                Arr[j] = temp;
            }
        }
    }
}
void showData(int m, donors Arr[])
{
    int i;
    for(i=0; i<m; i++)
    {
        printf("%s %s %.2f\n",Arr[i].name,Arr[i].surname,Arr[i].money);
    }
}
