#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float balance = 0;
    float amount;
    int choice;

    cout << "Enter customer name: ";
    cin >> name;

    do {
        cout << endl;
        cout << "--- BANKING SYSTEM ---" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;

        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0) {
                balance = balance + amount;

                cout << "Deposit successful!" << endl;
            }
            else {
                cout << "Invalid amount!" << endl;
            }
        }
        else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > 0 && amount <= balance) {
                balance = balance - amount;

                cout << "Withdrawal successful!" << endl;
            }
            else {
                cout << "Invalid amount or insufficient balance!" << endl;
            }
        }
        else if (choice == 3) {
            cout << "Customer: " << name << endl;
            cout << "Current balance: " << balance << endl;
        }
        else if (choice == 4) {
            cout << "Thank you for using our bank!" << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
