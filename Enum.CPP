#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    enum{start, pause, stop};
    int num, &num_2 = num;

    cout<<setw(50)<<"Value of enum{start, pause, stop} :- "<< endl;
    cout<<start<<endl<<pause<<endl<<stop<<endl;
}

