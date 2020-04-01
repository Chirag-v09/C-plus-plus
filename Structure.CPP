#include<iostream>
#include<iomanip>

using namespace std;

struct student
{
    string name;
    int clas, roll_no;

    void show()
    {
        cout<<name<<endl<<clas<<endl<<roll_no<<endl;
    }
}s3; // Global

student s4; // Global

int main()
{
    student s; // Local
    student s2 = {"chirag", 15}; // Local
    s2.roll_no = 171055;

    cout << endl;
    s2.show();
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

