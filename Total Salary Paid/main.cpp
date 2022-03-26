//efejzo20
#include <iostream>
#include <fstream>
#include <cstdlib>
#include  <iomanip>

using namespace std;
double getSalary(double rate, int hours);

int main()
{
    int i,hours,n;
    double salary,rate,sum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>rate;
        cin>>hours;
        salary=getSalary(rate,hours);
        sum+=salary;
    }

    std::cout << fixed << std::setprecision(2) << sum << endl;


    return 0;
}
double getSalary(double rate, int hours)
{
    double salary;
    if(hours<=20)
        salary=20*rate;
    else if(hours<=30)
        salary=rate*hours;
    else if(hours<=35)
        salary=(rate*30) +  ((hours-30)*rate*1.1);
    else if(hours<=40)
        salary=(rate*30) +  ((5*rate)*1.1) +  ((hours-35)*rate*1.2);
    else if(hours<=45)
        salary=(rate*30)+ ((5*rate)*1.1) +  ((5*rate)*1.2)  +  ((hours-40)*rate*1.3);
    else
        salary=rate*hours*1.0212765957;

    return salary;
}
