#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main()
{
    int a, b;
    string st1, st2, st5, st6;

    //while ((getchar()) != '\n');
    cout << "Enter First(1) String :- ";
    getline(cin, st1);
    cout << "Enter First(2) String (without space) :- ";
    cin >> st5;

    //while(getchar() != '\n');
    cout << endl << "Enter Second(1) String :- ";
    while(getchar() != '\n');
    getline(cin, st2);
    cout<<"Enter Second(2) string (without space) :- ";
    cin >> st6;

    string st3 = st1 + " " + st2;
    string st4 = st5 + " " + st6;
    cout << endl << "Combined Strings are (1):- " << st3 << endl << "                     (2) :- " << st4;

    return 0;
}

