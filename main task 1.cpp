#include <iostream>
using namespace std;

int main() {
    int courses;
    float grade, credit;
    float totalCredits = 0;
    float totalPoints = 0;
    float gpa;

    cout << "Enter number of courses: ";
    cin >> courses;

    for (int i = 1; i <= courses; i++) {
        cout << "Enter grade for course " << i << ": ";
        cin >> grade;

        cout << "Enter credit hours for course " << i << ": ";
        cin >> credit;

        totalCredits = totalCredits + credit;
        totalPoints = totalPoints + (grade * credit);
    }

    if (totalCredits > 0) {
        gpa = totalPoints / totalCredits;

        cout << endl;
        cout << "Total Credits: " << totalCredits << endl;
        cout << "Total Grade Points: " << totalPoints << endl;
        cout << "Your GPA/CGPA is: " << gpa << endl;
    }
    else {
        cout << "Invalid total credit hours." << endl;
    }

    return 0;
}
