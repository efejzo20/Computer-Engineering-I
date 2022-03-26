//efejzo20
#include <stdio.h>
#include <stdlib.h>
int GCD(int m, int n);
int Lcm(int m,int n);

int main()
{
    int n,num1,num2,lcm,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&num1,&num2);
        lcm=Lcm(num1,num2);
        sum=sum+lcm;
    }

    printf("%d",sum);

    return 0;
}


int GCD(int m, int n)
{
    int i,gcd;
    for(i=1; i <= m && i <= n; ++i)
    {
        if(m%i==0 && n%i==0)
            gcd = i;
    }
    return gcd;
}
int Lcm(int m,int n)
{
    int res1,res2;
    int gcd=GCD(m,n);
    res1=m/gcd;
    res2=n/gcd;

    return gcd*res1*res2;
}
