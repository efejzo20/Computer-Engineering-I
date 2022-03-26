//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
char getletter(int n);

int main()
{
    ifstream fin("input.txt");
    if(fin.fail())
        exit(1);
    int n,grade,a=0,b=0,c=0,d=0,e=0,f=0;
    fin>>n;

    for(int i=0; i<n; i++)
    {
        fin>>grade;
        switch(getletter(grade))
        {
        case 'A':
            a++;
            break;
        case 'B':
            b++;
            break;
        case 'C':
            c++;
            break;
        case 'D':
            d++;
            break;
        case 'E':
            e++;
            break;
        case 'F':
            f++;
            break;
        }
    }
    cout<<"A "<<a<<endl;
    cout<<"B "<<b<<endl;
    cout<<"C "<<c<<endl;
    cout<<"D "<<d<<endl;
    cout<<"E "<<e<<endl;
    cout<<"F "<<f<<endl;

    fin.close();
    return 0;
}

char getletter(int g)
{
    if(g>=90)
        return 'A';
    else if(g>=80)
        return 'B';
    else if(g>=70)
        return 'C';
    else if(g>=60)
        return 'D';
    else if(g>=50)
        return 'E';
    else
        return 'F';
}

