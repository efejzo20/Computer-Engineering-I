//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
int getDigit(long long num);

int main()
{
    long long num;
    int digit;
    scanf("%lld",&num);
    digit=getDigit(num);
    printf("%d",digit);

    return 0;
}
int getDigit(long long num)
{
    int i=0;
    while(num>0)
    {
        num/=10;
        i++;
    }
    return i;
}
