//efejzo20
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define NAMES 25
#define AVE(a,b) (double) ((a)+(b))/2
#define LOOP(n)  int i; for(i=0; i<n; i++)

struct Student
{
    char name[NAMES];
    double ave;
};

void getData(FILE *infile, struct Student a[], int n)
{
    int gr1,gr2;
    LOOP(n)
    {
        fscanf(infile, "%s",a[i].name);
        fscanf(infile, "%d %d",&gr1,&gr2);
        a[i].ave=AVE(gr1,gr2);
    }
}

void showData(struct Student a[], int n)
{
    LOOP(n)
    {
        printf("%s %lf",a[i].name, a[i].ave);
        printf("\n");
    }
}

int main()
{
    struct Student a[SIZE];
    FILE *infile;
    infile=fopen("input.txt", "r");
    if(infile==NULL)
        exit(0);

    int n;
    fscanf(infile, "%d",&n);
    getData(infile,a,n);
    showData(a,n);

    return 0;
}
