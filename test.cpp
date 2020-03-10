#include<iostream>
using namespace std;

double f(double x,double y)
{
    return x+y+1;
}

int main()
{
    double x,y;
    cout<<"Unesi 2 broja: ";
    cin>>x>>y;
    cout<<f(x,y)<<endl;
    return 0;
}
