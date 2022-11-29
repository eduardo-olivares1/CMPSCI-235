#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double length = 2.5; 
    double width = 3.2222; 
    double perimeter = (length*2) + (width*2);

    cout << fixed << setprecision(3) << perimeter << endl;
}