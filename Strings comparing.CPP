#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main()
{
    int res1, res2;
    char st1[100], st2[100];

    cout << "Enter First String :- ";
    cin >> st1;

    cout << "Enter Second String :- ";
    cin >> st2;

    strcmp(st1, st2) == 0?cout << endl << "Strings are same " : cout << endl << "Strings are different ";

    cout << endl;
    return 0;
}

