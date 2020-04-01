#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a, b, c;
    string value;

    cout<<endl<<"If First num is greater you get discount else you have to pay tax :"<<endl;
    cout<<endl<<"Enter two numbers :- "<<endl;
    cin>>a>>b;

    cout<<endl;
    c = a>b? 10:20;
    value = a>b? "Get Discount": "Pay Tax";

    cout<<value<<" of :- "<<c<<endl;
}

