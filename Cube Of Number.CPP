#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num, cube;

    cout<<"Enter a number :- ";
    cin>>num;

    cube = num*num*num;

    cout<<endl<<"Cube of Number :- "<<fixed<<setprecision(2)<<cube<<endl;
}

