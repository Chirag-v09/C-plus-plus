#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("hello.txt");
    int pos;
    pos = fin.tellg();
    cout << pos << endl;
    fin >> ch;
    pos = fin.tellg();
    cout << pos << endl;
    fin >> ch;
    pos = fin.tellg();
    cout << pos << endl;
    fin.close();
}
