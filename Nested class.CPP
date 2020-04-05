#include<iostream>
#include<cstring>

using namespace std;

class Student
{
    int roll_no;
    char name[10];

    class Address // Nested Class
    {
        int house_no;
        char street[10], city[10], state[10], pincode[10];
    public:
        void set_adr(int h, char *s, char *c, char *st, char *p)
        {
            house_no = h;
            strcpy(street, s);
            strcpy(city, c);
            strcpy(state, st);
            strcpy(pincode, p);
        }
        void show_adr()
        {
            cout << "House No. : " << house_no << ", ";
            cout << "Street : " << street << ", ";
            cout << "City : " << city << ", ";
            cout << "State : " << state << ", ";
            cout << "Pincode : " << pincode << endl;
        }
    };
    Address add; // Nested Class object

public:
    void setRollno(int r)
    {
        roll_no = r;
    }
    void setName(char *n)
    {
        strcpy(name, n);
    }
    void setAddress(int h, char *s, char *c, char *st, char *p)
    {
        add.set_adr(h, s, c, st, p);
    }
    void show_student()
    {
        cout << "Student Data :- " << endl;
        cout << "Name :- " << name << endl;
        cout << "Roll No. :- " << roll_no << endl;
        add.show_adr();
    }
};

int main()
{
    Student s1;
    s1.setRollno(171055);
    s1.setName("Chirag");
    s1.setAddress(28, "friends Enclave", "New Delhi", "Delhi", "110041");
    s1.show_student();
}
