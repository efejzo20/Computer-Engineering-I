//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;
int getDigit(int num);

int main()
{
    int num,sum
    ifstream fin("input.txt");
    if(fin.fail())
        exit(1);

    for(int i=0;i<n;i++)
    {
        fin>>num;
        sum+=getDigit(num);
    }
    cout<<

    fin.close();
    return 0;
}
int getDigit(int num)
{
    int larDigit=0;
    if(num<0)
        num*=(-1);

    while(num>0)
    {
        diit=num%10;
        if(digit>larDigit)
            larDigit=digit
        num/=10;

    }
    return larDigit;
}
