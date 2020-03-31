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
};

int main()
{
    student s;

    cout<<"Enter a Name :- ";
    getline(cin, s.name);
    cout<<"Enter a Class :- ";
    cin>>s.clas;
    cout<<"Enter a Roll No. :- ";
    cin>>s.roll_no;
    cout<<"\n";

    s.show();
}

