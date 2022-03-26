//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    double arr[50000];
    double sum1=0.0,mean,sum2=0.0,sd;

    for(i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
        sum1+=arr[i];
    }
    mean=sum1/n;

    for(i=0;i<n;i++)
    {
        sum2+=pow(arr[i]-mean, 2);
    }
    sd=sqrt(sum2/n);

    //printf("%f  %f",sd,mean);

    for(i=0;i<n;i++)
    {
        arr[i]=(arr[i]-mean)/sd;
        printf("%.2f ",arr[i]);
    }


    return 0;
}

/*
int main()
{
    int i,n;
    float data[50000],sd;

    scanf("%d",&n);

    for(i = 0; i < n; ++i)
        scanf("%f",&data[i]);

    sd=calculateSD(data,n);
    printf("%f ",sd);

    return 0;
}

float calculateSD(float data[],int n)
{
    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i = 0; i < n; ++i)
    {
        sum += data[i];
    }

    mean = sum/n;

    for(i = 0; i < n; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation / n);
}

*/
