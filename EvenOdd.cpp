#include <iostream>

using namespace std;

void evenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }
    else
    {
        cout << num << " is odd" << endl;
    }
}

int main()
{
    int x = 0;
    cout << "Enter a number" << endl;
    cin >> x;

    evenOdd(x);

    return 0;
}