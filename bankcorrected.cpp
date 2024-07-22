#include<iostream>
using namespace std;

class Bank {
private:
    int members[3];
    char name[35];
    int acc;
    int bala, total, amount, c, choice;
    char type[1];

public:
    void read() {
        cout << "Enter the name :" << endl;
        cin >> name;
        cout << "Enter the account number: " << endl;
        cin >> acc;
        cout << "Enter the type(Saving 'S' & Current 'C') " << endl;
        cin >> type;
        cout << "Enter the amount " << endl;
        cin >> bala;
        total = bala; // Initialize total with initial balance
        cout << "\n ----------------------";
        cout << "\n Account No. : " << acc;
        cout << "\n Name : " << name;
        cout << "\n Account Type : " << type;
        cout << "\n Balance : " << bala;
        cout << "\n ----------------------" << endl;
    }

    void deposite() {
        cout << "Enter the amount to deposit" << endl;
        cin >> amount;
        total += amount;
        bala = total;
        cout << "The balance amount is " << bala << endl;
    }

    void withdraw() {
        cout << "Enter the amount to withdraw" << endl;
        cin >> amount;
        if (total < amount)
            cout << "Insufficient balance" << endl;
        else {
            total -= amount;
            bala = total;
            cout << "The balance amount is " << bala << endl;
        }
    }

    void balance() {
        cout << "The balance amount is " << total << endl;
    }

    void details() {
        cout << "\n ----------------------";
        cout << "\n Account No. : " << acc;
        cout << "\n Name : " << name;
        cout << "\n Account Type : " << type;
        cout << "\n Balance : " << total;
        cout << "\n ----------------------" << endl;
    }

    void display(int inputacc) {
        if (inputacc == acc) {
            do {
                cout << "Enter the choice" << endl;
                cout << "1. Deposit" << endl;
                cout << "2. Withdraw" << endl;
                cout << "3. Balance" << endl;
                cout << "4. Details" << endl;
                cin >> choice;
                switch (choice) {
                    case 1: deposite(); break;
                    case 2: withdraw(); break;
                    case 3: balance(); break;
                    case 4: details(); break;
                    default: cout << "Invalid choice" << endl;
                }
                cout << "To continue press 1" << endl;
                cin >> c;
            } while (c == 1);
        } else {
            cout << "Enter the correct account number" << endl;
        }
    }
};

int main() {
    int i, acc, n;
    cout << "\n ----------------------" << endl << "Enter number of account holders" << endl;
    cin >> n;
    Bank a[n];
    for (i = 0; i < n; i++) {
        a[i].read();
    }

    while (true) {
        cout << "Enter the account number (or 1 to exit): ";
        cin >> acc;
        if (acc == 1) break;
        for (i = 0; i < n; i++) {
            a[i].display(acc);//eviden acc number pass cheyyum argument ayi
        }
    }

    for (i = 0; i < n; i++) {
        a[i].details();
    }

    return 0;
}
/*output:

Enter number of account holders
2
Enter the name :
sui
Enter the account number: 
123
Enter the type(Saving 'S' & Current 'C') 
S
Enter the amount 
1000

 ----------------------
 Account No. : 123
 Name : sui
 Account Type : S
 Balance : 1000
 ----------------------
Enter the name :
nonu
Enter the account number: 
234
Enter the type(Saving 'S' & Current 'C') 
S
Enter the amount 
3000

 ----------------------
 Account No. : 234
 Name : nonu
 Account Type : S
 Balance : 3000
 ----------------------
Enter the account number (or 1 to exit): 123
Enter the choice
1. Deposit
2. Withdraw
3. Balance
4. Details
4

 ----------------------
 Account No. : 123
 Name : sui
 Account Type : S
 Balance : 1000
 ----------------------
To continue press 1
1
Enter the choice
1. Deposit
2. Withdraw
3. Balance
4. Details
1
Enter the amount to deposit
3400
The balance amount is 4400
To continue press 1
5


Enter the correct account number
Enter the account number (or 1 to exit): 234
Enter the correct account number
Enter the choice
1. Deposit
2. Withdraw
3. Balance
4. Details
4

 ----------------------
 Account No. : 234
 Name : nonu
 Account Type : S
 Balance : 3000
 ----------------------
To continue press 1
1
Enter the choice
1. Deposit
2. Withdraw
3. Balance
4. Details
2
Enter the amount to withdraw
500
The balance amount is 2500

To continue press 1
5

Enter the account number (or 1 to exit): 1

 ----------------------
 Account No. : 123
 Name : sui
 Account Type : S
 Balance : 4400
 ----------------------

 ----------------------
 Account No. : 234
 Name : nonu
 Account Type : S
 Balance : 2500
 ----------------------
*/
