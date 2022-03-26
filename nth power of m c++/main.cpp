//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;
unsigned int power(int base,int exp);

int main()
{
    int n,m;
    double res;

    //ifstream fin;
    //fin.open("input.txt");

    ifstream fin("input.txt");
    if(fin.fail())
        exit(1);

    fin>>n>>m;

    res=power(m,n);

    cout<<fixed<<res<<endl;

    fin.close();

    return 0;
}

unsigned int power(int base,int exp)
{
   unsigned int result=1;

    for(int i=1; i<=exp; i++)
        result = (unsigned int)result * base;

    return result;
}


