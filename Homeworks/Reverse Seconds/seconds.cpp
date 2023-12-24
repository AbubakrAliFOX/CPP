#include <iostream>
using namespace std;

int main()
{
    unsigned int Total, Days, Hours, Minutes, Seconds;

    cout << "Please enter Total Seconds: ";
    cin >> Total;

    Seconds = Total % 60;
    Total = Total / 60;

    Minutes = Total % 60;
    Total = Total / 60;

    Hours = Total % 24;

    Days = Total / 24;

    cout << "Days : " << Days << endl;
    cout << "Hours : " << Hours << endl;
    cout << "Minutes : " << Minutes << endl;
    cout << "Seconds : " << Seconds << endl;

    return 0;
}