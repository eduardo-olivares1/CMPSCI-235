#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter an integer angle" << endl;
    cin >> input;

    if (input > 90)
    {
        cout << "Angle is OBTUSE" << endl;
    }
    else if (input == 90)
    {
        cout << "Angle is RIGHT" << endl;
    }
    else if (input < 90)
    {
        cout << "Angle is ACUTE" << endl;
    }

    return 0;
}