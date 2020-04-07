#include<iostream>
#include<cstring>
//#include<string>

using namespace std;

int main()
{
    string s1; // empty string

    string s2 = "Hello"; // string s2("hello") // string s2 = string "Hello"

    char str[] = "Hello";
    string s3 = str; // s3(str)

    string s4 = s3; // s4(s3)

    s1 = "Chirag"; // assignment

    string s5 = s2 + " " + s1; // concatenation
    cout << endl << s5;

    s1 += s2;

    cout << endl << s1 << endl;

    if (s1 == "ChiragHello") // comparison.
        cout << endl << "True" << endl;

    char ss[] = "Hello World";
    string s6 = s1 + ss +'A';
    cout << s6 << endl;

    string s7;
    s7.assign("Rahul");
    s7.append(" Verma");
    cout << endl << s7 << endl;

    s7.insert(2, "123");
    cout << endl << s7 << endl;

    s7.replace(3, 7, "A");
    cout << endl << s7 << endl;

    s7.erase();
    cout << endl << "String after using erase function :- " << s7 << endl;

    s7 = "hello online online students";
    int index = s7.find("online"); // find function finds the string from the starting of the string.
    cout << endl << "Index :- " << index << endl;

    index = s7.rfind("online"); // rfind function finds the string from the ending of the string.
    cout << endl << "Index :- " << index << endl;

    string s8 = "chirag";
    string s9 = "Chirag";
    index = s8.compare(s9);
    cout << endl << "Index :- " << index << endl;

    char str2[100];
    strcpy(str2, s9.c_str());
    cout << endl << str2 << endl;

    int len = s9.size();
    cout << endl << "Size of string s9 is :- " << len << endl;
}
