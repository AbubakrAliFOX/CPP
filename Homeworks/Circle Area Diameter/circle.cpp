#include <iostream>
using namespace std;

int main () {
    unsigned short int Dia;
    float Area;
    const float Pi = 3.14;

    cout << "Please enter a the diameter: ";
    cin >> Dia; 


    Area = (Pi * (Dia * Dia)) / 4;
    cout << "Area is: " << Area;
    
    return 0;
}