#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int A, B;

    cout << "Please inter A: ";
    cin >> A;

    cout << "Please inter B: ";
    cin >> B;

    cout << "********************\n";
    cout << A << " = " << B << " is " << (A == B) << endl;
    cout << A << " != " << B << " is " << (A != B) << endl;
    cout << A << " > " << B << " is " << (A > B) << endl;
    cout << A << " < " << B << " is " << (A < B) << endl;
    cout << A << " >= " << B << " is " << (A >= B) << endl;
    cout << A << " <= " << B << " is " << (A <= B) << endl;
    cout << "********************\n";

    return 0;
}