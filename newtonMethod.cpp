#include <iostream>
#include <math.h>
using namespace std;

double newton(double x)
{

    return pow(x,2)-3*x+2;

}

double derivative(double y)
{
    return 2*y-3;

}

int main()
{

    double x1=0,x2;

    for(int i=0;i<19;i++)
    {
         double f=x1-(newton(x1)/derivative(x1));

        cout<<"\n\nIteration: "<<i;
        cout<<"\n"<<f;

        if(f==x1)
        {
            break;
        }
         x1=f;

    }
    return 0;
}
