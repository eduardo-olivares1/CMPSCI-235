#include <iostream>
using namespace std;

int main()
{
    char grade;
    cin >> grade;
    
    switch (grade)
    {
    case 'A':
        cout << "Your score is greater than or equal to 90" << endl;
        break;
    case 'B':
        cout << "Your score is greater than or equal to 80" << endl;
        break;
    case 'C':
        cout << "Your score is greater than or equal to 70" << endl;
        break;
    case 'D':
        cout << "Your score is greater than or equal to 60" << endl;
        break;
    default:
        cout << "It doesn't matter" << endl;
        break;
    }
}