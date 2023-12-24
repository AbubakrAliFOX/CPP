#include <iostream>
// #include<string>
using namespace std;

int x = 1000;

struct User
{
    string Name, City, Country;
    char Gender;
    unsigned short int Age;
    float Salary, YearlySalary;
    bool Married;
};

void GetInfo (User &Info) {

    cout << "Please inter your name ";
    cin >> Info.Name;

    cout << "Please inter your city ";
    cin >> Info.City;

    cout << "Please inter your country ";
    cin >> Info.Country;

    cout << "Please inter your gender ";
    cin >> Info.Gender;

    cout << "Please inter your age ";
    cin >> Info.Age;

    cout << "Please inter your monthlySalary ";
    cin >> Info.Salary;

    cout << "Are you married? ";
    cin >> Info.Married;

    Info.YearlySalary = Info.Salary * 12;
}

void PrintInfo (User Info) {
    cout << "********************\n";
    cout << "Name: " << Info.Name << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "City: " << Info.City << endl;
    cout << "Country: " << Info.Country << endl;
    cout << "Gender: " << Info.Gender << endl;
    cout << "Monthly Salary: " << Info.Salary << endl;
    cout << "Yearly Salary: " << Info.YearlySalary << endl;
    cout << "married? " << Info.Married << endl;
    cout << "********************\n";
}

int main()
{
    User Ahmad;
    GetInfo(Ahmad);
    PrintInfo(Ahmad);
    return 0;
}