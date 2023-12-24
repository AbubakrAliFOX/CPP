#include <iostream>
#include<string>
using namespace std;


int main()
{
    string st1 = "43.22";
    int n1 = stof(st1);
    double N2 = 33.5;
    float N3 = 55.23;
    string newSt = to_string(N2);
    int newInt = int(N3);
    cout << n1 << endl;
    cout << newSt<< endl;
    cout << newInt << endl;
    return 0;
}