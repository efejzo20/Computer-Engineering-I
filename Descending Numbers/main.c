//efejzo20
#include <stdio.h>
#include <stdlib.h>
int isdescending(int n);
int numDigits(int num);

int main()
{
    int numDig,i,n,num,order,cnt=0,lastDigit,digitBefore;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num);
        numDig=numDigits(num);
        order=isdescending(num);
        lastDigit=num%10;
        digitBefore=(num%100)/10;
        if(order==0 && numDig>=2 && lastDigit<digitBefore)
            cnt++;
            printf("last %d   before %d\n",lastDigit,digitBefore);
            printf("order=%d\n",order);
            printf("numdig=%d\n\n",numDig);
    }

    printf("%d",cnt);

    return 0;
}
int isdescending(int n)
{
    int ascending = 1;
    int temp=n%10;
    while (n>0)
    {
        n /= 10;
        if (temp < n % 10)
        {
            ascending = 0;
        }
    }
    return ascending;
}

int numDigits(int num)
{
    int cnt=0;
    while(num != 0)
    {
        cnt++;
        num/=10;
    }
    return cnt;
}
