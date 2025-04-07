#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
double Balance = 0;
double Deposits =0;
double Withdrawal = 0;
int Choice = 0;
int balance = 500;
char Quit_Key = '4';
double Deposit_Info;

double checkBalance(double balance)
     {
        
        return balance;
     }

double Deposit (double Deposit_Info)
     {
        if (Deposit_Info<=0){
            cout<<"You are trying to add negative money. Prhaps you were trying to make a withdrawl?"<<endl;
            cout<<"Please try again at the menu"<<endl;
        }
     }


int main() {
   cout<<"======BANKING SYSTEM======"<<endl;
cout<<"1. Deposit money"<<endl;
cout<<"2. Withdraw money"<<endl;
cout<<"3. Check balance"<<endl;
cout<<"4. Quit"<<endl;
cout<<"=========================="<<endl;
cout<<"Choose an option: ";
cin>>Choice;
while (Choice !=4){

switch (Choice) {
            case 1:
                cout << "Enter the amount you would like to deposit: ";
                cin >> Deposits;
                if (Deposits < 0) {
                    cout << "Invalid amount. Deposit must be positive." << endl;
                } else {
                    Balance += Deposits;
                    cout << "Deposit successful! New balance is $" << fixed << setprecision(2) << Balance << endl;
                }
                break;
            case 2:
                cout << "Enter the amount you would like to withdraw: ";
                cin >> Withdrawal;
                if (Withdrawal < 0 && Withdrawal >Balance) {
                    cout << "Insufficient funds! Withdrawal unsuccessful." << endl;
                } else {
                    Balance -= Withdrawal;
                    cout << "Withdrawal successful! New balance is $" << fixed << setprecision(2) << Balance << endl;
                }
                break;
            case 3:
                cout << "Your current balance is: $" << fixed << setprecision(2) << Balance << endl;
                break;
            default:
                cout << "Invalid choice. Please choose again." << endl;
                break;
}    
        cout << "Is there anything else I can help you with? If not, enter '4' to quit: ";
        cin >> Choice;
        cout << "" << endl;
}
cout<<"Thank you for using our services!"<<endl;
return 0;
}
