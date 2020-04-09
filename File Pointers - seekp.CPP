#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream f_out;
    char ch;
    f_out.open("hello.txt", ios::ate | ios::app);
    cout << f_out.tellp() << endl;
    f_out << " world";
    f_out.seekp(0, ios_base::beg);
    cout << f_out.tellp();
    f_out.close();
}
