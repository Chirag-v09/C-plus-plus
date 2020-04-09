#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int len;
    char st[100];

    cout << endl << "Enter String :- ";
    cin >> st;

    cout << "Entered String :- ";
    for(int i=0; st[i]!='\0'; i++)
        cout << st[i];

    return 0;
}

