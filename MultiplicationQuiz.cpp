#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int guess = -1;

    srand(time(NULL));

    num1 = rand() % 9 + 1;
    num2 = rand() % 9 + 1;
    int answer = num1 * num2;

    while (answer != guess)
    {
        cout << "What is " << num1 << " * " << num2 << endl;
        cin >> guess;
    }

    cout << "The correct answer is " << answer << endl;

    return 0;
}