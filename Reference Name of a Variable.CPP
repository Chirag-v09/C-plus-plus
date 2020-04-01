#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num, &num_2 = num;

    cout<<"Enter a number :- ";
    cin>>num;

    cout<<endl<<"Value of Number :- "<<num;
    num_2 += 1;
    cout<<endl<<"Value of Number and Reference Number after increment :- "<<num<< " , " <<num_2<<endl;
}

