#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    BankAccount(std::string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }

    void display() {
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount account("John Doe", 1000.0);

    account.deposit(500.0);
    if (account.withdraw(200.0)) {
        std::cout << "Withdrawal successful." << std::endl;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }

    account.display();

    return 0;
}

