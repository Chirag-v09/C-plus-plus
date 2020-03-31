#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float a, b, c, avg_2, avg_3;

    cout<<"Enter 2 number :- "<<endl;
    cin>>a>>b;

    avg_2 = (a+b)/2.0;
    cout<<"Average of 2 Number is :-"<<fixed<<setprecision(2)<<avg_2<<endl<<endl;

    cout<<"Enter 3 number :-"<<endl;
    cin>>a>>b>>c;

    avg_3 = (a+b+c)/3.0;
    cout<<"Average of 3 Number is :-"<<fixed<<setprecision(2)<<avg_3;
}
