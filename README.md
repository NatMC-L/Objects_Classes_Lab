# BankAccount Class

A C++ class for representing a bank account and performing basic banking operations. 

## Data Dictionary

| Attribute     | Data Type     | Description                    |
|---------------|---------------|--------------------------------|
| `accountNumber`       | `int` | The unique account number.              |
| `accountHolder`      | `string` | Name of the account holder.             |
| `balance`        | `double` | The current account balance.        |

## Methods List

| Method Signature             | Return Type   | Description               |
|------------------------------|---------------|---------------------------|
| `BankAcount()`                     | (Constructor) | Default constructor.      |
| `BankAccount(int accNum, string holderName, double bal)`  | (Constructor) | Creates the initial values of the acount.|
| `getAccountNumber() const`           | `int` | Returns the account number.    |
| `getAccountHolderName() const`          | `string` | Returns the account holders name.   |
| `getBalance() const`        | `double`        | Returns the current balance.     |
| `deposit(double amount)`                 | `void`        | Adds money to the account.      |
| `withdraw(double amount)`               | `void`        | Removes money form the account if sufficient funds exist.         |
|`displayAccountInfo() const ` |`void`| Display the account Information.|
## Program Features
- Create new bank accounts.
- Deposit money into an account.
- Withdraw money form the account.
- Update the account holder's name.
- View all account information.
- Validate user input to prevent invalid operations.
----------------------------------------------------
### Final Submission: Objects & Classes Lab 
