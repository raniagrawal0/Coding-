// 8.Write class and object based program to deposit or withdraw money in a bank account. 

#include<iostream>
using namespace std;

class BankAccount {
    private:
        string accountHolderName;
        int accountNumber;
        double balance;

    public:
        BankAccount(string name, int number, double initialBalance) {
            accountHolderName = name;
            accountNumber = number;
            balance = initialBalance;
        }

        // Function to deposit money
        void deposit(double amount) {
            balance += amount;
            cout << "Deposit of "<<amount<<" is Successful."<<endl<<"   New balance is: " << balance << endl;
        }

        // Function to withdraw money
        void withdraw(double amount) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawal of "<<amount<<" is Successful."<<endl<<"    New balance is: " << balance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        }

        // Function to display account details
        void displayAccountDetails() {
            cout << "\nAccount Holder Name: " << accountHolderName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main() {
    BankAccount account1("Rani", 9876543, 10000.0);

    account1.displayAccountDetails();
    cout<<endl;
    
    cout<<"SELECT:"<<endl<<"1.Deposit"<<endl<<"2.Withdrawal"<<endl<<"3.Display account details:"<<endl;
    int k;float amount;
    cin>>k;
    switch(k){
        case 1:cout<<"enter amount to be deposited: ";
            cin>>amount;
            account1.deposit(amount);
            break;
        case 2:cout<<"enter amount to  withdraw: ";
            cin>>amount;
            account1.withdraw(amount);
            break;
        case 3:cout<<"Account details: "<<endl;
            account1.displayAccountDetails();
            break;
        default:cout<<"wrong choice:";
    }
    return 0;
}