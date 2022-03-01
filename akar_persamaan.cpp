#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c, x1, x2;

    cout<<"Persamaan Kuadrat = ax^2 + bx + c"<<endl;
    cout<<" Input Nilai a = ";
    cin>>a;
    cout<<" Input Nilai b = ";
    cin>>b;
    cout<<" Input Nilai c = ";
    cin>>c;
    cout<<endl;
    cout<<"Akar dari "<<a<<"x^2 + "<<b<<"x + "<<c<<" adalah :" << endl;
    x1=((-b+sqrt(b*b-4*a*c))/2*a);
    x2=((-b-sqrt(b*b-4*a*c))/2*a);
    cout<<"X1 = "<<x1<<endl;
    cout<<"X2 = "<<x2<<endl;

    return 0;
}