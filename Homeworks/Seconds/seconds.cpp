#include <iostream>
using namespace std;

float ToSeconds (float Days, float Hours, float Minutes, float Seconds) {
    float Total;
    Total = Seconds + (60 * Minutes) + (60 * 60 * Hours) + (24 * 60 * 60 * Days);
    return Total;
}

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


    cout << "Total is: " << ToSeconds(Days, Hours, Minutes, Seconds) << " Seconds" << endl;

    return 0;
}