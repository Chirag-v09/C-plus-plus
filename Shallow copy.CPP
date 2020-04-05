 #include<iostream>

 using namespace std;

 class Chirag
 {
     int a, b;
 public:
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout << a << endl << b << endl;
    }
 };
 int main()
 {
     Chirag c1;
     c1.set(1, 2);

     Chirag c2;
     c2 = c1; // Implicit copy assignment operator // shallow copy

     Chirag c3 = c1; // Copy Constructor // shallow copy

 }
