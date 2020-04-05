 #include<iostream>

 using namespace std;

 class Chirag
 {
     int a, b;
     int *p;
 public:
    Chirag()
    {
        p = new int;
    }
    Chirag(Chirag &c)
    {
        a = c.a;
        b = c.b;
        p = new int;
        *p = *(d.p);
    }
    void set(int a, int b, int z)
    {
        this->a = a;
        this->b = b;
        *p = z;
    }
    void show()
    {
        cout << a << endl << b << endl;
    }
    ~Chirag()
    {
        delete p;
    }
 };
 int main()
 {
     Chirag c1;
     c1.set(1, 2, 3);

     Chirag c2;
     c2 = c1; // Implicit copy assignment operator // deep copy

     Chirag c3 = c1; // Copy Constructor // deep copy

 }
