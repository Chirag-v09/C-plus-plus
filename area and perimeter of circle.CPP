#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float r, area, perimeter;

    cout<<"Enter radius of a cicle :- ";
    cin>>r;

    area = (r*r*22)/7;
    perimeter = (44*r)/7;

    cout<<endl<<"Area of circle :-"<<fixed<<setprecision(2)<<area<<endl;
    cout<<"Perimeter of circle :-"<<fixed<<setprecision(2)<<perimeter<<endl;
}

