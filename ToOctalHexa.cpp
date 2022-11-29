#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a decimal integer" << endl;
    cin >> input;

    cout << "Decimal: " << input << endl;
    cout << "Hex: " << showbase<< hex << input << endl;
    cout << "Oct: " << oct << input << endl;

    return 0;
}