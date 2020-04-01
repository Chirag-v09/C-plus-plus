#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int len;
    char st[100];

    cout << endl << "Enter String :- ";
    cin >> st;

    len = strlen(st);

    cout << "Length of string :- " << len << endl;

    return 0;
}

