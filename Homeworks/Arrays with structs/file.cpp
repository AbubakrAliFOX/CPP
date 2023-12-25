#include <iostream>
// #include<string>
using namespace std;


struct stUser 
{
    string FirstName;
    string LastName;
    int Age;
    int Phone;

};

void ReadUserData (stUser& User) {
    cout << "Please Enter your first name: \n";
    cin >> User.FirstName;

    cout << "Please Enter your last name: \n";
    cin >> User.LastName;

    cout << "Please Enter your age: \n";
    cin >> User.Age;

    cout << "Please Enter your Phone: \n";
    cin >> User.Phone;
}

void PrintUserData(stUser User) {
    cout << "\n********************\n";
    cout << "First Name: " << User.FirstName << endl;
    cout << "Last Name: " << User.LastName << endl;
    cout << "Age: " << User.Age << endl;
    cout << "Phone: " << User.Phone << endl;
    cout << "\n********************\n";
}

void ReadAllUsersData (stUser User[100], int Length) {
    for(int i = 0; i < Length; i++) {
        ReadUserData(User[i]);

    }
}

void PrintAllUsersData (stUser User[100], int Length) {
    for(int i = 0; i < Length; i++) {
        PrintUserData(User[i]);

    }
}

void GetLength (int &Length) {
    cout << "How many users would you like to add? (Max: 100)";
    cin >> Length;
}

int main()
{
    stUser User[100];
    int Length;
    GetLength(Length);
    ReadAllUsersData(User, Length);
    cout << "////////////////////";
    PrintAllUsersData(User, Length);

    return 0;
}