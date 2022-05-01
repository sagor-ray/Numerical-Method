#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
double f(double x)
{
    return pow(x,2)-4*x-10;
}
int main()
{
    double x1,x2,x3;
    int n;
    cout<<"Input the number of iteration: ";
    cin>>n;
    cout<<"Enter the value of x1: ";
    cin>>x1;
    cout<<"\nEnter the value of x2: ";
    cin>>x2;
    for(int i=1; i<=n; i++)
    {
        x3=x2-((f(x2)*(x2-x1))/(f(x2)-f(x1)));

        cout<<"\nIteration "<<i<<": x3= "<<x3<<endl;

        if((x3-x2)==0)
        {
            break;
        }
        x1=x2;
        x2=x3;

    }
    return 0;
}

