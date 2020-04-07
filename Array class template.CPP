#include<iostream>

using namespace std;

template <class X, int num> class Array
{
    X n[num];

public:
    void show()
    {
        cout << "Data Type = " << typeid(n[0]).name() << endl << "Value :- " << num << endl;
    }
};

int main()
{
    //Num <float>n(1.5, 2.1);
    Array <int, 10> my_array;
    my_array.show();
}
