//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;
double getpriceEnergy(int energy);

int main()
{
    ifstream fin("input.txt");
    if(fin.fail())
        exit(1);
    int n,cea,energy;
    double priceEnergy,priceCea,totPrice=0;
    double price,sum=0;
    fin>>n>>cea;


    for(int i=0;i<n;i++)
    {
        fin>>energy;
        priceEnergy=getpriceEnergy(energy);
        priceCea=8*cea;
        price=(priceEnergy+priceCea)*1.2;
        totPrice+=round(price);

    }
    sum+=totPrice;
    cout<<fixed<<sum<<endl;

    fin.close();
    return 0;
}

double getpriceEnergy(int energy)
{
    double price;
    if(energy<=310)
        price=7.7*energy;
    else
        price=2387+(energy-310)*13.5;
    return price;
}

