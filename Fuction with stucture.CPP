#include<iostream>

using namespace std;

struct student
{
    char name[20];
    int roll_no, cls;
};

student get_ref(student &s)
{
    cout << "Enter Student Name :- " ;
    cin >> s.name;
    cout << "Enter Student Roll No. :- ";
    cin >> s.roll_no;
    cout << "Enter Student Class :- ";
    cin >> s.cls;

    return s;
}

void show_ref(student &s)
{
    cout << "Student Name :- " << s.name << endl << "Student Roll No. :- " << s.roll_no << endl << "Student Class :- " << s.cls << endl;
}
student get(student s)
{
    cout << "Enter Student Name :- " ;
    cin >> s.name;
    cout << "Enter Student Roll No. :- ";
    cin >> s.roll_no;
    cout << "Enter Student Class :- ";
    cin >> s.cls;

    return s;
}

void show(student s)
{
    cout << "Student Name :- " << s.name << endl << "Student Roll No. :- " << s.roll_no << endl << "Student Class :- " << s.cls << endl;
}

int main()
{
    student S1;

    // call by value
    S1 = get(S1);
    cout << endl;
    show(S1);

    student S2;

    // call by reference
    cout << endl;
    get_ref(S2);
    cout << endl;
    show_ref(S2);

    return 0;
}
