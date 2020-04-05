#include<iostream>

using namespace std;

//         X - Placeholder
template <class X>
X big(X a, X b)
{
    if (a>b)
        return a;
    else
        return b;
}

template <class X, class Y>
X big(X a, Y b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{
    cout << "bigger Number :- " << big(10, 2) << endl;
    cout << "bigger Number :- " << big(10, 2.5) << endl;
    cout << "bigger Number :- " << big(10.5, 2) << endl;
    cout << "bigger Number :- " << big(10.5, 2.5) << endl;
}
