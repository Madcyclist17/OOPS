#include<iostream>
using namespace std;

class bank {
    private:
    char name[35];
    int acc;
    int bala, total, amount;
    char type;

    public:
    void openAccount() {
        cout << "Enter the name:";
        cin >> name;
        cout << "Enter the account number: ";
        cin >> acc;
        cout << "Enter the account type (s for saving, c for current): ";
        cin >> type;
        cout << "Enter the initial amount: ";
        cin >> bala;
        total = bala;
    }

    void deposit() {
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        total += amount;
        bala = total;
        cout << "The balance amount is " << bala << endl;
    }

    void withdraw() {
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (total < amount) {
            cout << "Insufficient balance" << endl;
        } else {
            total -= amount;
            bala = total;
            cout << "The balance amount is " << bala << endl;
        }
    }

    void balance() {
        cout << "The balance amount is " << total << endl;
    }

    void detail() {
        cout << "\nAccount no: " << acc << endl;
        cout << "Name: " << name << endl;
        cout << "Account type: " << type << endl;
        cout << "Balance: " << total << endl;
    }

    int getAccountNumber() {
        return acc;
    }
};

int main() {
    bank accounts[100]; 
    int count = 0; 
    int acc, choice, c;
    do {
        cout << "Enter the choice" << endl
             << "1: Deposit" << endl
             << "2: Withdraw" << endl
             << "3: Balance" << endl
             << "4: Detail" << endl
             << "5: Open account" << endl
             << "6: Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the account number: ";
                cin >> acc;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].getAccountNumber() == acc) {
                        accounts[i].deposit();
                        break;
                    }
                }
                break;
            case 2:
                cout << "Enter the account number: ";
                cin >> acc;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].getAccountNumber() == acc) {
                        accounts[i].withdraw();
                        break;
                    }
                }
                break;
            case 3:
                cout << "Enter the account number: ";
                cin >> acc;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].getAccountNumber() == acc) {
                        accounts[i].balance();
                        break;
                    }
                }
                break;
            case 4:
                cout << "Enter the account number: ";
                cin >> acc;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].getAccountNumber() == acc) {
                        accounts[i].detail();
                        break;
                    }
                }
                break;
            case 5:
                if (count < 100) {
                    accounts[count].openAccount();
                    count++;
                } else {
                    cout << "Maximum account limit reached" << endl;
                }
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
        cout << "To continue press 1, otherwise press any other key: ";
        cin >> c;
    } while (c == 1);

    return 0;
}