#include<iostream>

using namespace std;

class Chirag
{
    int a, &b;
    const int c;
public:
    Chirag(int &n):a(5), b(n), c(n) // it is use for the const type variable
    {
        a = n;
    }
};
int main()
{
    int aa = 5;
    Chirag c(aa);
}
