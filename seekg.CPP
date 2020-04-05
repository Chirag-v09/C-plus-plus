#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("hello.txt");
    cout << fin.tellg() << endl;
    ch = fin.get();
    cout << ch <<endl;
    ch = fin.get();
    cout << ch <<endl;
    cout << fin.tellg() << endl;
    fin.seekg(6);
    ch = fin.get();
    cout << ch <<endl;
    cout << fin.tellg() << endl;
    fin.seekg(-2, ios_base::end); //fin.seekg(2, ios_base::cur); //fin.seekg(2, ios_base::beg);
    cout << fin.tellg() << endl;

    ch = fin.get();
    cout << ch <<endl;

    ch = fin.get();
    cout << ch <<endl;
    cout << fin.tellg() << endl;

    ch = fin.get();
    cout << ch <<endl;
    cout << fin.tellg() << endl;
    fin.close();
}
