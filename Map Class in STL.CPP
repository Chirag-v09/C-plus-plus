#include<iostream>
#include<map>

using namespace std;

int main()
{
    map <int, string> customer;
    customer[101] = "chirag";
    customer[102] = "rahul";
    customer[103] = "aashish";

    map <string, int> marks {{"chirag", 100}, {"rahul", 200}, {"aashish", 300}};

    cout << customer[101] << endl;
    cout << customer.at(102) << endl;

    cout << endl;
    cout << marks["chirag"] << endl;
    cout << marks.at("rahul") << endl;
    cout << endl;

    map <int, string>::iterator p = customer.begin();
    while(p != customer.end())
    {
        cout << p->first << " " << p->second << endl; // p-> first for printing the first value of the Associative array.
        p++;
    }

    cout << endl;
    cout << customer.size() << endl;
    cout << customer.empty() << endl;

    customer.insert({104, "sultan"});
    cout << customer[104] << endl;

    customer.insert(pair <int, string> (105, "saurabh"));
    cout << customer[105] << endl;

    customer.clear();
    cout << endl << "Associated Array after using clear function :" << endl;
    p = customer.begin();
    while(p != customer.end())
    {
        cout << p->first << " " << p->second << endl;
        p++;
    }

}
