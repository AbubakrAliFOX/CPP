#include <iostream>
using namespace std;

int main () {
    unsigned short int L;
    float Area;
    const float Pi = 3.14;

    cout << "Please enter a the circumference: ";
    cin >> L; 


    Area = (L * L) / (4 * Pi);
    cout << "Area is: " << Area;
    
    return 0;
}