//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
int getPrice(int age);

int main()
{
    ifstream fin("input.txt");
    if(fin.fail())
        exit(1);

    int n,price,sum=0,age;

    //cout<<getprc(3)<<endl;

    fin>>n;

    for(int i=0;i<n;i++)
    {
        fin>>age;
        price=getPrice(age);
        //cout<<price<<endl;
        sum+=price;
    }

    cout<<sum<<endl;

    fin.close();
    return 0;
}

int getPrice(int age)
{
    int prc=0;
    if(age<=3)
        prc=0;
    else if(age<=9)
        prc=5;
    else
        prc=8;

    return prc;
}
