#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> l1; // empty list
    list <int> l2 {1, 2, 3};
    list <string> l3 {"India", "U.S", "Chirag"};

    l2.push_back(4); // Adding value at the last of the list.
    l2.push_front(0); // Adding value at the front of the list.

    list <int>::iterator p = l2.begin();

    while(p != l2.end())
    {
        cout << *p << endl;
        p++;
    }
    cout << endl;

    l2.pop_back(); // Removing last value of the list.
    l2.pop_front(); // Removing last value of the list.

    p = l2.begin();
    while(p != l2.end())
    {
        cout << *p << endl;
        p++;
    }
    cout << endl;

    cout << "Total Values in the list are :- " << l2.size() << endl;

    list <int> l4 {2, 4, 3, 5 ,1, 7, 6, 8, 9, 9, 10};
    cout << endl << "New List :" << endl;
    p = l4.begin();
    while(p != l4.end())
    {
        cout << *p << endl;
        p++;
    }
    cout << endl;

    l4.sort();
    cout << "After Sorting :" << endl;

    p = l4.begin();
    while(p != l4.end())
    {
        cout << *p << endl;
        p++;
    }
    cout << endl;

    l4.reverse();
    cout << "After Reversing :" << endl;

    p = l4.begin();
    while(p != l4.end())
    {
        cout << *p << endl;
        p++;
    }
    cout << endl;

    l4.remove(10);
    cout << "After Removing value 10 :" << endl;

    p = l4.begin();
    while(p != l4.end())
    {
        cout << *p << endl;
        p++;
    }
    cout << endl;

    l4.remove(100);
    cout << "After Removing value 100 :" << endl;

    p = l4.begin();
    while(p != l4.end())
    {
        cout << *p << endl;
        p++;
    }
    cout << "As there is 100 value isn't present hence no value is remove." << endl;

    l4.clear();
    cout << endl << "After Clearing :";
    p = l4.begin();
    while(p != l4.end())
    {
        cout << *p << endl;
        p++;
    }
    cout << "Nothing is print here because everything element is removed." << endl;
}
