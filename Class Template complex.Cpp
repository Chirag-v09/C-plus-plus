#include<iostream>

using namespace std;

class ArrayList
{
private:
    struct ControlBlock
    {
        int Capacity;
        int *arr_ptr;
    };
    ControlBlock *s;
};
