#include <iostream>
using namespace std;

// C++ program to add first 10 numbers except 8, and display the total

int main()
{
    int sum = 0;
    const int MAX = 10;

    for (int i = 1; i <= MAX; i++)
    {
        if (i == 8)
        {
            continue;
        }
        else
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}