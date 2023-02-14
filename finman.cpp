#include <iostream>
#include <string>

using namespace std;

struct userData{
    double income;
    double expense;
    double total;
};

int main(){
    string name;
    double income;
    double expense;

    cout << "Welcome to the Financial Manager!" << endl;
    cout << "Please enter your name: ";
    cin >> name;
    cout << endl;

    userData data;
    data.income = 0;
    data.expense = 0;
    data.total = 0;

    while (true){
        cout << "What type of transaction would you like to enter? \n"
            << "1. Income \n"
            << "2. Expense \n"
            << "3. View Current Balance \n"
            << "4. Exit \n"
            << "Enter your choice: ";

        int choice;
        cin >> choice;
        cout << endl;

        switch (choice){
        case 1:
            cout << "Please enter the amount of income: ";
            cin >> income;
            data.income += income;
            data.total += income;
            cout << "Income successfully recorded!" << endl;
            break;
        case 2:
            cout << "Please enter the amount of expense: ";
            cin >> expense;
            data.expense += expense;
            data.total -= expense;
            cout << "Expense successfully recorded!" << endl;
            break;
        case 3:
            cout << "Name: " << name << endl;
            cout << "Total income: " << data.income << endl;
            cout << "Total expense: " << data.expense << endl;
            cout << "Current balance: " << data.total << endl;
            break;
        case 4:
            cout << "Thank you for using the Financial Manager!" << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    }
    return 0;
}
