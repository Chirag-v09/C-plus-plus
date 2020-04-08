#include<iostream>

using namespace std;

void show(int a[10])
{
    a[0] = 10;
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    show(a);
    for (int i = 0; i <10; i++)
        cout << a[i] << endl;
}
