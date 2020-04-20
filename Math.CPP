#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int a, b;
    char ch;
    string st;

    cout << endl << "Enter Base Number and it's Power value :- " << endl;
    cin >> a >> b;
    cout << "Answer :- " << pow(a, b) << endl;

    cout << endl << "Enter a number to get it's absolute value :- ";
    cin >> a;
    cout << "Answer :- " << fabs(a) << endl;

    cout << endl << "Enter a Number to find it's Sqrt :- ";
    cin >> a;
    cout << "Answer :- " << sqrt(a) << endl;

    return 0;
}

