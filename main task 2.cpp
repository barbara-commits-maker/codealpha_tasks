#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;

    string username, password;
    string savedUsername, savedPassword;

    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter a username: ";
        cin >> username;

        cout << "Enter a password: ";
        cin >> password;

        ifstream checkFile("user.txt");

        if (checkFile >> savedUsername >> savedPassword) {
            if (username == savedUsername) {
                cout << "Username already exists!" << endl;
                checkFile.close();
                return 0;
            }
        }

        checkFile.close();

        ofstream file("user.txt");

        file << username << " " << password;

        file.close();

        cout << "Registration successful!" << endl;
    }
    else if (choice == 2) {
        cout << "Enter your username: ";
        cin >> username;

        cout << "Enter your password: ";
        cin >> password;

        ifstream file("user.txt");

        if (file >> savedUsername >> savedPassword) {
            if (username == savedUsername &&
                password == savedPassword) {

                cout << "Login successful!" << endl;
            }
            else {
                cout << "Incorrect username or password!" << endl;
            }
        }
        else {
            cout << "No registered user found!" << endl;
        }

        file.close();
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
