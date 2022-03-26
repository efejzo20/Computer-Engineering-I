//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

float Ave(int g1,int g2,int g3);

using namespace std;

int main()
{
    int g1,g2,g3,n;
    float ave, totAve=0,class_ave;
    ifstream fin("input.txt");
    if(fin.fail())
        exit(1);
    fin>>n;

    for(int i=0; i<n;i++)
    {
        fin>>g1>>g2>>g3;
        ave = Ave(g1,g2,g3);
        totAve += round(ave);
    }

    class_ave=totAve/n;
    cout<<class_ave<<endl;
    fin.close();
    return 0;
}

float Ave(int g1,int g2,int g3)
{
    float Ave;
    Ave=float(g1+g2+g3)/3;

    return Ave;
}
