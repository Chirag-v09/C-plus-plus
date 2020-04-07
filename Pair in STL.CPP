#include<iostream>

using namespace std;

class student
{
    int a;
public:
    void set(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    pair <string, int> p1;
    pair <string, string> p2;
    pair <string, float> p3;
    pair <int, student> p4;

    p1 = make_pair("Chirag", 10);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("Drilling c++", 345.5);
    student s;
    s.set(100);
    s.show();
    p4 = make_pair(1, s);

    cout << "Pairs : " << endl;
    cout << "First Pair :" << endl << p1.first << endl << p1.second << endl << endl;
    cout << "Second Pair :" << endl << p2.first << endl << p2.second << endl << endl;
    cout << "Third Pair :" << endl << p3.first << endl << p3.second << endl << endl;
    cout << "Fourth Pair :" << endl << p4.first << endl;
    (p4.second).show();
}
