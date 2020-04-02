#include <iostream>

using namespace std;



int main()
{
    int N;
    cout << "Enter a Number :- "
    cin >> N;
    cout << endl;
    if(N % 2 != 0)
        cout << "Weird";
    else
    {
        if(2 <= N && N <= 5)
         {cout << "Not Weird";}
        else
        {
            if(6 <= N && N <= 20)
                {cout << "Weird";}
            else
                {
                    if(N > 20)
                    {
                        cout << "Not Weird";
                    }
                }
        }

    }
    return 0;
}
