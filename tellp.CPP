#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream f_out;
    char ch;
    f_out.open("hello.txt", ios::app);
    // It will ignore the initial alresdy written string and start indexing from the end of that string from 0.
    int pos;
    pos = f_out.tellp();
    cout << pos << endl;
    f_out << "chirag";
    pos = f_out.tellp();
    cout << pos << endl;
    f_out.close();
}
