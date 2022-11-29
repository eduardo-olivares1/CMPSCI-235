#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Enter the first number" << endl; 
    cin >> num1;
    cout << "Enter the second number" << endl; 
    cin >> num2; 
    cout << "Here are your numbers: " << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Here are your numbers swaped:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}