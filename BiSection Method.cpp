#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
    return pow(x,2)-x-2;
}
int main()
{
    double x1,x2,x0;
    int n;
    cout<<"Input the number of iteration: ";
    cin>>n;
    cout<<"Enter the value of x1: ";
    cin>>x1;
    cout<<"\nEnter the value of x2: ";
    cin>>x2;
    for(int i=1; i<=n; i++)
    {
        x0=(x1+x2)/2;
        cout<<"\nIteration "<<i<<": x0= "<<x0<<endl;
        if(f(x0)==0)
        {
            cout<<"Root: "<<x0;
            break;
        }
        else if(f(x0)*f(x1)<0)
        {
            x2=x0;
        }
        else if(f(x0)*f(x2)<0)
        {
            x1=x0;
        }
    }
    return 0;
}

