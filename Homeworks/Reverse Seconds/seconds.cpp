#include <iostream>
using namespace std;

float ReadPositiveNumber(string Msg)
{
    float Number;
    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

struct Time
{
    int Days, Hours, Minutes, Seconds;
};

Time SecondsToTime (int Total) {
    Time newTime;
    newTime.Seconds = Total % 60;
    Total = Total / 60;

    newTime.Minutes = Total % 60;
    Total = Total / 60;

    newTime.Hours = Total % 24;

    newTime.Days = Total / 24;

    return newTime;
}

void PrintResult (Time newTime) {
    cout << "Days : " << newTime.Days << endl;
    cout << "Hours : " << newTime.Hours << endl;
    cout << "Minutes : " << newTime.Minutes << endl;
    cout << "Seconds : " << newTime.Seconds << endl;
}

int main()
{
    PrintResult(SecondsToTime(ReadPositiveNumber("Enter Total of Seconds: ")));

    
    return 0;
}