//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int a,b,k;
    cin>>a>>b>>k;
    int sum=0;

    while(a<=b)
    {
        sum+=a;
        a=a+k;

    }
    cout<<sum;

    return 0;
}
