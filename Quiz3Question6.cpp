#include <iostream>
#include <cmath>

using namespace std;

pair<double, double> cylinder(double radius, double length)
{
    const double PI = 3.14159;
    double volume = PI * (pow(radius, 2)) * length;
    double surfaceArea = 2 * PI * radius * length;

    return make_pair(volume, surfaceArea);
}

int main()
{
    pair<double, double> values = cylinder(15, 10);
    cout << "Volume: " << values.first << endl;
    cout << "Surface Area: " << values.second << endl;
    return 0;
}