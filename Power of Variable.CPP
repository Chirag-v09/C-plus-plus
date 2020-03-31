#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num, n, power = 1;

    cout<<"Enter a number :- ";
    cin>>num;

    cout<<"Enter Power :- ";
    cin>>n;

    for(int i=0; i<n; i++)
        power *= num;

    cout<<endl<<"Power of Number :- "<<power<<endl;
}

