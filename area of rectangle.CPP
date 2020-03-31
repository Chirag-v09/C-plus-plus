// To calculate area of rectange

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float l, b, area, perimeter;

    cout<<"Enter Length and Breath :- "<<endl;
    cin>>l>>b;

    area = l*b;
    perimeter = 2*(l+b);
    cout<<"Area of rectangle is :- "<<fixed<<setprecision(2)<<area<<endl;
    cout<<"Perimeter of rectangle is :- "<<fixed<<setprecision(2)<<perimeter<<endl;
}
