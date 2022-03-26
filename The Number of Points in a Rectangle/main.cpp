//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{ ifstream fin("input.txt");
    if(fin.fail())
        exit(1);

    int x1,y1,x2,y2;
    int x,y;
    int n,point=0;

    fin>>x1>>y1>>x2>>y2;
    fin>>n;

    for(int i=0;i<n;i++)
    {
        fin>>x>>y;
        if(x>=x1&&x<=x2)
            if(y>=y1&&y<=y2)
            point++;
    }
    cout<<point<<endl;

    fin.close();
    return 0;
}
