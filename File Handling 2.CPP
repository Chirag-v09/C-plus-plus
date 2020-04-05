#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream f_out;
    f_out.open("hello.txt", ios::app | ios::binary | ios::out); // ios::in
    f_out << "Hello World";
    f_out.close();

    char ch;
    fstream fin;
    fin.open("hello.txt", ios::in);
    ch = fin.get(); // fin >> ch;
    while(!fin.eof())
    {
        cout << ch;
        ch = fin.get(); // fin >> ch;
    }
    fin.close();
}
