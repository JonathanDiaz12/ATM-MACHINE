#include <iostream>
using namespace std;

// Function prototypes
void displayMenu();
void checkBalance(const double &balance);
void depositMoney(double &balance);
void withdrawMoney(double &balance);

int main() {
    double balance = 0.0;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                depositMoney(balance);
                break;
            case 3:
                withdrawMoney(balance);
                break;
            case 4:
                cout << "Exiting the ATM simulator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "\nATM Simulator Menu:" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
}

void checkBalance(const double &balance) {
    cout << "Your current balance is: $" << balance << endl;
}

void depositMoney(double &balance) {
    double amount;
    cout << "Enter the amount to deposit: $";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful. Your new balance is: $" << balance << endl;
    } else {
        cout << "Invalid amount. Deposit must be greater than $0." << endl;
    }
}

void withdrawMoney(double &balance) {
    double amount;
    cout << "Enter the amount to withdraw: $";
    cin >> amount;

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
    } else if (amount > balance) {
        cout << "Insufficient funds. Your current balance is: $" << balance << endl;
    } else {
        cout << "Invalid amount. Withdrawal must be greater than $0." << endl;
    }
}