//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

double threeTimes(double in);

int main()
{
    double in , out;

    ifstream fin("input.txt");
    if(fin.fail())
        exit(1);
    fin>>in;
    out = threeTimes(in);
    cout<<fixed<<out<<endl;

    fin.close();
    return 0;
}

double threeTimes(double in)
{
    return (3*in);

}
