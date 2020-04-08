#include<iostream>

using namespace std;

int main()
{
    // rand1 & rand2 are two dice where we get number between 1 & 6
    // s[11] is the array that helps to count that the number of times a number comes
    // sum is used to find sum of two random numbers and then helps to sum all the counts of each number on dice.

    long int rand1, rand2, sum = 0, s[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i < 36000; i++)
    {

        rand1 = rand() % 6 + 1;
        rand2 = rand() % 6 + 1;

        sum = rand1 + rand2;

        switch(sum)
        {
            case 2 : s[0] += 1;
                    break;

            case 3 : s[1] += 1;
                    break;

            case 4 : s[2] += 1;
                    break;

            case 5 : s[3] += 1;
                    break;

            case 6 : s[4] += 1;
                    break;

            case 7 : s[5] += 1;
                    break;

            case 8 : s[6] += 1;
                    break;

            case 9 : s[7] += 1;
                    break;

            case 10 : s[8] += 1;
                    break;

            case 11 : s[9] += 1;
                    break;

            case 12 : s[10] += 1;
                    break;
        }
    }

    sum = 0;
    for (int i = 0; i < 11; i++)
    {
        cout << i + 2 << " = " << s[i] << endl;
        sum += s[i];
    }
    cout << endl << "No. of times 2 dice are thrown :- " << sum << endl;
}
