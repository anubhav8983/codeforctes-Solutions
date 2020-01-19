#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>> n;
    float x=n;
    double sum=0.000000000000;
    if(n==1)
        cout<<"1.000000000000";
    else if(n==2)
        cout<<"1.500000000000";
    else
    {
    for(float i=1;i<=n;i++)
    {
       sum=sum+(1.0/i);
    }
    cout << setprecision(13)<< sum;}
    return 0;
}
