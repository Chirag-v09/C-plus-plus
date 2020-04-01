#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a;
    char ch;
    string st;

    cout<<endl<<"Enter Integer value :- ";
    cin>>a;
    cout<<"Enter Character value :- ";
    cin>>ch;
    cout<<"Enter String :- ";
    while ((getchar()) != '\n');
    getline(cin, st);
    cout << endl << "Entered Integer is :- \"" << a << "\" and it's size is :- " << sizeof(a) << endl;
    cout << "Entered Character is :- \"" << ch << "\" and it's size is :- " << sizeof(ch) << endl;
    cout << "Entered String is :- \"" << st << "\" and it's size is :- " << sizeof(st) << endl;
    return 0;
}

