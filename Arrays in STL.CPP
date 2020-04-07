#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int, 10> my_array;
    array <int, 5> arr = {11, 22, 33, 44, 55};
    array <int, 10> ar = {11, 22, 33, 44, 55};
    array <int, 10> ar2 = {1, 2, 3, 4, 5};

    //arr
    cout << arr.at(1) << endl;
    cout << arr[3] << endl;

    cout << arr.front() << endl; // 11
    cout << arr.back() << endl; // 55

    cout << ar.front() << endl; // 11
    cout << ar.back() << endl; // end index i.e 9th index or 10th value is none hence giving output 0.

    ar.fill(10);
    cout << "new array ar :- " << endl;
    for (int i = 0; i<10; i++)
        cout << ar[i] << endl;

    cout << "Array ar2 :- " << endl;
    for (int i = 0; i<10; i++)
        cout << ar2[i] << endl;

    ar.swap(ar2);
    cout << "Array ar after swap with ar2 :- " << endl;
    for (int i = 0; i<10; i++)
        cout << ar[i] << endl;

    cout << "Size of array ar :- " << ar.size() << endl;

    cout << "Begin address of ar = " << ar.begin() << endl;
    cout << "End address of ar = " << ar.end() << endl;
}
