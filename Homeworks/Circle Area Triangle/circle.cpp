#include <iostream>
using namespace std;

int main()
{
    float A, B, Area;
    const float Pi = 3.14;

    cout << "Please enter A: ";
    cin >> A;

    cout << "Please enter B: ";
    cin >> B;

    Area = Pi * ((B * B) / 4) * ((2*A-B) / (2*A+B));
    cout << "Area is: " << Area;

    return 0;
}