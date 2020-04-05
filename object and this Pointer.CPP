#include<iostream>

using namespace std;

class Box
{
    int l, b, h;
public:
    void setvalue(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void showvalue()
    {
        cout << "length :- " << l << endl << "Breath :- " << b << endl << "height :- " << h << endl;
    }
};

int main()
{
    Box *p, box; // *p is the object pointer of the class Box.
    p = &box;
    box.setvalue(1, 2, 3);
    p->setvalue(2, 3, 5);
    p->showvalue();
}
