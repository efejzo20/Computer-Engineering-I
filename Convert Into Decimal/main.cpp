//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    long long int num;
    int digit,length,base,n=0;
    unsigned int num10=0,num1;
    cin>>length>>base;
    cin>>num;

    for(int i=0;i<length;i++)
    {
        digit=num%10;
        num1=(digit*pow(base,n));
        num10+=num1;
        n++;
        num/=10;
    }
    cout<<num10<<endl;

    return 0;
}


