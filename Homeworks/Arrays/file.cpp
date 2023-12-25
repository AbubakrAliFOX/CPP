#include <iostream>
// #include<string>
using namespace std;

void ReadNumbers(int x[3])
{
    cout << "Please enter 1st number: ";
    cin >> x[0];
    cout << "Please enter 2nd number: ";
    cin >> x[1];
    cout << "Please enter 3rd number: ";
    cin >> x[2];
}

void GetAverage(int x[3])
{
    cout << (x[0] + x[1] + x[2]) / 3 << endl;
}

int main()
{
    int x[3];
    ReadNumbers(x);
    GetAverage(x);

    return 0;
}