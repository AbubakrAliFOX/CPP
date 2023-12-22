#include <iostream>
using namespace std;

int main () {
    string myName, city, country;
    char gender;
    int myAge;
    float monthlySalary;
    bool married = false;

    cout << "Please inter your name ";
    cin >> myName;

    cout << "Please inter your city ";
    cin >> city;

    cout << "Please inter your country ";
    cin >> country;

    cout << "Please inter your gender ";
    cin >> gender;

    cout << "Please inter your age ";
    cin >> myAge;

    cout << "Please inter your monthlySalary ";
    cin >> monthlySalary;

    cout << "Are you married? ";
    cin >> married;

    float yearlySalary = monthlySalary * 12;

    cout << "********************\n";
    cout << "Name: " << myName << endl;
    cout << "Age: " << myAge << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Gender: " << gender << endl;
    cout << "Monthly Salary: " << monthlySalary << endl;
    cout << "Yearly Salary: " << yearlySalary << endl;
    cout << "married? " << married << endl;
    cout << "********************\n";

    return 0;
}