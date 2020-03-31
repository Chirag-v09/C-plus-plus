#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num, &num_2 = num;

    cout<<"Enter a number :- ";
    cin>>num;

    cout<<endl<<"Value of Number :- "<<num;
    cout<<endl<<"Value of Reference Number :- "<<num_2<<endl;
}

