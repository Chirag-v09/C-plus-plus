#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int a;
    char ch;

    cout << endl << "Enter value (0-6):- ";
    cin>>a;
    switch(a)
    {
        case 1:cout << "Monday";
            break;
        case 2:cout << "Tuesday";
            break;
        case 3:cout << "Wednesday";
            break;
        case 4:cout << "Thursday";
            break;
        case 5:cout << "Friday";
            break;
        case 6:cout << "Saturday";
            break;
        case 0:cout << "Sunday";
            break;
        default:cout << "Invalid value";
            break;
    }
    cout << endl;
    return 0;
}

