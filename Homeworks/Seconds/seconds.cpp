#include <iostream>
using namespace std;

int main()
{
    float Days, Hours, Minutes, Seconds, Total;

    cout << "Please enter Days: ";
    cin >> Days;

    cout << "Please enter Hours: ";
    cin >> Hours;

    cout << "Please enter Mins: ";
    cin >> Minutes;

    cout << "Please enter Seconds: ";
    cin >> Seconds;


    Total = Seconds + (60 * Minutes) + (60 * 60 * Hours) + (24 * 60 * 60 * Days);
    cout << "Total is: " << Total << "Seconds" << endl;

    return 0;
}