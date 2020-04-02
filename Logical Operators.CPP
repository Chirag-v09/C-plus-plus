#include<iostream>

using namespace std;

int main()
{
    int a, b;

    cout<<endl<<"Enter two numbers :- "<<endl;
    cin>>a>>b;

    cout<<endl;
    if(a>0 && b>0)
        cout<<"Both numbers are positive ";
    else
        cout<<"One or both of them are negative ";
    cout<<endl;
}

