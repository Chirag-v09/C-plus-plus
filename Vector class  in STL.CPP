#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v; // initialize with size 0.
    vector <int> v1 {10, 20, 30}; //initialize with size 3.
    vector <char> v2(5); // creates a 5 element char vector.
    vector <char> v3(5, 'a'); // Initialize 5 element char vector with 'a' // all filled with a.
    vector <int> v4(5, 10); // Initialize with 5 length and all having value of 10.
    vector <string> v5(3, "Chirag"); // Can save 3 strings all having value Chirag.
    cout << v5[0] << endl;
    cout << v5[1] << endl;
    cout << v5[2] << endl;
    cout << endl;
    for(int i = 0; i < 3; i++)
        cout << v1[i] << endl;

    v1.push_back(40); // add value at last i.e 40.

    cout << "Size of Vector v1 :- " << v1.size() << endl;
    cout << "Capacity of Vector v1 :- " << v1.capacity() << endl;

    cout << endl << "Value at index 3 is :- " << v1.at(3) << endl;

    cout << endl << "First = " << v1.front() << endl;
    cout << "Last = " << v1.back() << endl;

    // Using Iterator ////////////
    vector <int>:: iterator it = v1.begin(); // Now pointing the First Block i.e first value.
    v1.insert(it + 3, 35);
    cout << endl << "Showing First Value through iterator :- " << *it << endl; // as iterator is pointer and pointing the first value of the vector hence showing the first value of vector.
    cout << endl << "value at 4th position is :- " << v1[3] << endl;
    ////////////////////

    v1.clear();
    cout << endl << "Size and capacity of Vector after clear :" << endl;
    cout << "Size of Vector v1 :- " << v1.size() << endl;
    cout << "Capacity of Vector v1 :- " << v1.capacity() << endl;
}
