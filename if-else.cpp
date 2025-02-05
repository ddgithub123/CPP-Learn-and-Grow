#include <iostream>

using namespace std;

int main()
{
    int var;
    cout << "Enter a number\t";
    cin >> var;

    if (var % 2 == 0)
    {
        cout << "\nThe number is even";
    }
    else
    {
        cout << "\nThe number is odd";
        if (var % 3 == 0)
        {
            cout << "\nThe number is divisible by 3";
        }
        else if (var % 4 == 0)
        {
            cout << "\nThe number is divisible by 4";
        }
        else
        {
            cout << "\nThe number is not divisible by 3 or 4";
        }
    }
    //////////////////////Switch case////////////////////
    switch (var % 2)
    {
    case 0:
        cout << "\nThe number is even";
        break;
    case 1:
        cout << "\nThe number is odd";
        break;
    default:
        break;
    }
}