#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a, b;

    cout<<endl<<"Enter two numbers :- "<<endl;
    cin>>a>>b;

    cout<<endl;
    a>b?cout<<"First Number is Greater than Second Number"<<endl:cout<<"Second Number is Greater than First Number"<<endl;
}

