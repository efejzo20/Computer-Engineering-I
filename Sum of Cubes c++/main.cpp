//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;
long long sum(int a,int b);
int cube(int num);

int main()
{
    int a,b;
    long long res;

    ifstream fin("input.txt");
    if(fin.fail())
        exit(1);
    //cout<<cube(1000)<<endl; --> test cube function
    //cout<<sum(1,2)<<endl;   --> test sum function

    fin>>a>>b;
    res=sum(a,b);
    cout<<res<<endl;

    fin.close();
    return 0;
}

int cube(int num)
{
    return(num*num*num);
}

long long sum(int a,int b)
{
    long long res=0;

    for(int i=a; i<=b; i++)
        res = (long long) res + cube(i);

    return res;
}
