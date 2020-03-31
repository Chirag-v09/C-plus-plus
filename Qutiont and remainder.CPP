#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num1, num2, q, r;

    cout<<"Enter First and Second number :- "<<endl;
    cin>>num1>>num2;

    q = num1/num2;
    r = num1%num2;

    cout<<endl<<"Quotient :- "<<fixed<<setprecision(2)<<q;
    cout<<endl<<"Remainder :- "<<fixed<<setprecision(2)<<r<<endl;
}
