#include <iostream>
#include <string>
#include <vector>
#include "BankAccount.h"
using namespace std;


int main(){
    vector<BankAccount> accounts;

    int choice; 

    do {
        cout << "\n==== Bank of Water ===\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display All Accounts\n";
        cout << "5. Change Account Holder Name\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            
            case 1: {
                string number, name;
                double balance;

                cout << "Enter Account Number: ";
                cin >> number;
                
                cin.ignore();

                cout << "Enter Account Holder Name: ";
                getline(cin, name);
                cout << "Enter Initial Balane: ";
                cin >> balance;

                accounts.push_back(BankAccount(number, name, balance));
                cout << "Account created succesfully.\n";
                break;
            }

            case 2: {
                string number;
                double amount;

                cout << "Enter the acount Number: ";
                cin >> number;
                bool found = false;
                for (int i =0; i < accounts.size(); i++) {
                    if (accounts[i].getAccountNumber() == number) {
                        cout << "Enter Deposit Amount: ";
                        cin >> amount;
                        accounts[i].deposit(amount);
                        found = true; 
                        break;
                    }
                }

                if(!found)
                   cout << "Account not found.\n";

                break; 
            }

            case 3: {
                string number;
                double amount;
                cout << "Enter the acount Number: ";
                cin >> number;
                bool found = false;
                for (int i =0; i < accounts.size(); i++) {
                    if (accounts[i].getAccountNumber() == number) {
                        cout << "Enter Withdrawl Amount: ";
                        cin >> amount;
                        accounts[i].withdraw(amount);
                        found = true; 
                        break;
                    }
                }
                
                if(!found)
                   cout << "Account not found.\n";

                break;
            }

            case 4: {
                cout << "\n --- Account List ---\n";
                for (int i = 0; i < accounts.size(); i++) {
                    cout << "Account Number: " << accounts[i].getAccountNumber() << endl;
                    cout << "Holder Name: " << accounts[i].getAccountHolderName() << endl;
                    cout << "Balance: $" << accounts[i].getBalance() << endl;
                }
                break;
            }

            case 5: {
                string number, newName;
                bool found = false;

                cout << "Enter Acout Number: ";
                cin >> number;
                cin.ignore();

                for(int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].getAccountNumber() == number) {
                        cout << "Enter New Holder Name: ";
                        getline(cin, newName);

                        accounts[i].setAccountHolderName(newName);
                        cout << "Name updated successfully.\n";
                        found = true;
                        break;
                    }
                }
                
                if (!found)
                    cout << "Account not found.\n";

                break;    
                
            }

            case 6: 
                cout << "Have good Day or Night\n";
                break;

            default: 
                cout << "Invalid choice.\n";  
            
        } 

    }while (choice !=6);


    return 0;
}