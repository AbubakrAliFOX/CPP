#include <iostream>
using namespace std;

void secondsToDays (int Total) {
    unsigned int Days, Hours, Minutes, Seconds;
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
}

int main()
{
    unsigned int Total;

    cout << "Please enter Total Seconds: ";
    cin >> Total;

    secondsToDays(Total);

    
    return 0;
}