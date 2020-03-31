#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num, *p = &num, val(110); // val is variable having value = 100 i.e val = 100

    cout<<"Enter a number :- ";
    cin>>num;

    cout<<endl<<fixed<<setw(5)<<"Value of Number :- "<<*p;
    cout<<endl<<"Address of Number :- "<<p;
    cout<<endl<<"Address of Pointer :- "<<&p<<endl<<val;
}

