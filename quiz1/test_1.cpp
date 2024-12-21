#include <iostream>

using namespace std;

int main() {
    string name;
    string student_id;
    int DD, MM, YYYY;
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Enter your student ID: ";
    cin >> student_id;
    cout << "Enter your date of birth" << endl;
    cout << "DD = ";
    cin >> DD;
    cout << "MM = ";
    cin >> MM;
    cout << "YYYY = ";
    cin >> YYYY;

    cout << endl << "Saved Information:" << endl;
    cout << "Full Name: " << name << endl;
    cout << "Student ID: " << student_id << endl;
    cout << "Date of Birth: " << DD << "/" << MM << "/";
    if (YYYY > 2500) {
        cout << YYYY - 543 << " (BE)" << endl;
        cout << "You are " << 2567 - YYYY << " years old." << endl;
    } else {
        cout << YYYY+543 << " (AD)" << endl;
        cout << "You are " << 2567 - (YYYY + 543) << " years old." << endl;
    }
    return 0;
}