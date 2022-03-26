//efejzo20
#include <stdio.h>
#include <stdlib.h>
int countOverAve(int Arr[],int n,float ave);
float calcAve(int Arr[],int n);

int main()
{
    int n,cnt,i;
    int Numbers[100000];
    float ave;

    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    fscanf(infile,"%d",&n);

    for(i=0 ; i<n; i++)
    {
        fscanf(infile,"%d",&Numbers[i]);
    }
    ave=calcAve(Numbers,n);
    cnt=countOverAve(Numbers,n,ave);

    printf("%d",cnt);

    fclose(infile);
    return 0;
}

float calcAve(int Arr[],int n)
{
    int i, sum=0,j=0;
    for(i=0; i<n; i++)
        if(i%2==0){
            sum+=Arr[i];
            j++;
        }
    return (float)sum/j;
}
int countOverAve(int Arr[],int n,float ave)
{
    int cnt=0,i;
    for(i=0; i<n; i++)
        if(Arr[i]>ave)
            cnt++;
    return cnt;
}
