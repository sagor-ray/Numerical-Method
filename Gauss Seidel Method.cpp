#include <iostream>
using namespace std;

int main()
{
    double  a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,n;

    cout<<"Enter the number of iteration: ";
    cin>>n;
     cin>>a1>>a2>>a3>>a4;
     cin>>b1>>b2>>b3>>b4;
     cin>>c1>>c2>>c3>>c4;
     double x1=0,x2=0,x3=0;
     for(int i=1;i<=n;i++)
     {
         x1=(a4-(a2*x2)-(a3*x2))/a1;
         x2=(b4-(b1*x1)-(b3*x3))/b2;
         x3=(c4-(c1*x1)-(c3*x2))/c3;
         cout<<"\n\nIteration :"<<i<<endl;
         cout<<"x1 ="<<x1<<endl;
         cout<<"x2 ="<<x2<<endl;
         cout<<"x3 ="<<x3<<endl;

     }

    return 0;
}


