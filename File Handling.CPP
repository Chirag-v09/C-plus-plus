#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream f_out;
    f_out.open("hello.txt");
    f_out << "Hello World";
    f_out.close();

    char ch;
    ifstream fin;
    fin.open("hello.txt");
    ch = fin.get(); // fin >> ch;
    while(!fin.eof())
    {
        cout << ch;
        ch = fin.get(); // fin >> ch;
    }
    fin.close();
}
