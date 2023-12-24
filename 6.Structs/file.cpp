#include <iostream>
#include <cmath>
using namespace std;

struct Car
{
    string Brand;
    string Model;
    int Year;
};


int main()
{
    Car MyCar1;

    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;

    cout << MyCar1.Brand;
    cout << MyCar1.Model;
    cout << MyCar1.Year;
    return 0;
}