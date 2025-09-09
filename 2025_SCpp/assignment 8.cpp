/*Lab of programming question 08
Description

Assume that a class BankAccount is provided, the definition as follow

class BankAccount {
private:
  int balance;
public:
  BankAccount(int m) : balance(m) {}
  int &getBalance() {
    return balance;
  }
};
Please read and unstand the code in template then complete it.


Input

refer to the template


Output

refer to the template


Sample Input 1 

10000
withdraw 100
deposit 1000
balance
exit
Sample Output 1

10900
Sample Input 2 

0
deposit 1000
withdraw 100
balance
exit
Sample Output 2

900*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int balance;
public:
    BankAccount(int m) : balance(m) {}
    int &getBalance() {
        return balance;
    }
};

int main() {
    int initial;
    cin >> initial;
    BankAccount account(initial);

    string command;
    while (true) {
        cin >> command;
        if (command == "withdraw") {
            int amount;
            cin >> amount;
            account.getBalance() -= amount;
        } 
        else if (command == "deposit") {
            int amount;
            cin >> amount;
            account.getBalance() += amount;
        } 
        else if (command == "balance") {
            cout << account.getBalance() << endl;
        } 
        else if (command == "exit") {
            break;
        }
    }

    return 0;
}
