// Experiment 4.         Create a class to represent a bank account. It should include the following: 
//                    Data Members: 
//                              Name of account holder 
//                              Account number 
//                              Type of account 
//                              Balance amount 
//                   Member Function: 
//                             To initialize the data members with appropriate data 
//                             To deposit an amount 
//                               To withdraw an amount after checking the balance 
//                              To display details of account holder 
 
// Write a program to use this class.


#include<iostream>
using namespace std;

class BankAccount {
    private:
        string accountHolderName;
        int accountNumber;
        string accounttype;
        double balance;

    public:
        BankAccount(string name, int number,string type, double initialBalance) {
            accountHolderName = name;
            accountNumber = number;
            accounttype=type;
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
            cout<<"Account type: "<<accounttype<<endl;
            cout << "Balance: " << balance << endl;
        }
};

int main() {
    BankAccount account1("Rani", 9876543,"Saving", 10000.0);

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