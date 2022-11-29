#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int total = 1;

    for (int i = 1; i <= 4; i = i + 1)
    {
        total = total * 2;
    }
    cout << total << endl;
    return 0;
}