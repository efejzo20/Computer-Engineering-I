//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    for(int i=m;i<=n;i++)
    {
        if(i%2!=0)
            cout<<i<<" ";
        if(i%100==0)
            cout<<""<<endl;
    }

    return 0;
}
