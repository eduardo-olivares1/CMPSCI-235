#include <iostream>
#include <iomanip> 

using namespace std;

double secondsToMinutes(int seconds)
{
    double minutes = (seconds / 60);
    double remaining_seconds = seconds - (int(minutes) * 60);
    remaining_seconds = remaining_seconds / 100;
    double conversion = minutes + remaining_seconds;
    return conversion;
}

int main()
{
    double conversion = secondsToMinutes(62);
    cout << setprecision(2) << fixed << conversion << endl;
    return 0;
}