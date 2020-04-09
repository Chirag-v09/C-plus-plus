#include<iostream>
#include<iomanip>

using namespace std;

class student
{
public:

    string name;
    int clas, roll_no;

    void show()
    {
        cout<<name<<endl<<clas<<endl<<roll_no<<endl;
    }
    inline void show_2();
}s3; // Global\

void student:: show_2()
{
    cout<<name<<endl<<clas<<endl<<roll_no<<endl;
}

student s4; // Global

int main()
{
    student s; // Local
    student s2 = {"chirag", 15}; // Local
    s2.roll_no = 171055;

    cout << endl;
    s2.show_2();
    cout << endl;

    cout<<"Enter Name :- ";
    getline(cin, s.name);
    cout<<"Enter Class :- ";
    cin>>s.clas;
    cout<<"Enter Roll No. :- ";
    cin>>s.roll_no;
    cout<<"\n";


    s.show();
}

