#include <iostream>
#include <string>
using namespace std;

// Regular Function สำหรับการคำนวณพื้นฐาน
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

// Recursive Function สำหรับการบวกเลข 1 ถึง N
int sum_recursive(int n) {
    if (n == 0) return 0;
    return n + sum_recursive(n - 1);
}

void show_menu() {
    // แสดงเมนู
    cout << "\nMenu:\n";
    cout << "1. Add Numbers\n2. Subtract Numbers\n3. Multiply Numbers\n";
    cout << "4. Divide Numbers\n5. Calculate Rectangle Area\n";
    cout << "6. Display 1-N (For Loop)\n7. Display 1-N (While Loop)\n";
    cout << "8. Display 1-N (Do While Loop)\n";
    cout << "9. Sum 1-N (For Loop)\n10. Sum 1-N (Recursive)\n";
    cout << "Q/q. Quit\nEnter your choice: ";
        
}

void basic_math_by_choice (string* choice) {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (*choice == "1") {
        cout << "Result: " << add(a, b) << endl;
    } else if (*choice == "2") {
        cout << "Result: " << subtract(a, b) << endl;
    } else if (*choice == "3") {
        cout << "Result: " << multiply(a, b) << endl;
    } else if (*choice == "4") {
        cout << "Result: " << divide(a, b) << endl;
    }
}

void calculate_rectangle_area() {
    double width, height;
    cout << "Enter width and height: ";
    cin >> width >> height;
    cout << "Area: " << multiply(width, height) << endl;
}

void display_1_to_n_by_choice (string* choice) {
    int n;
    cout << "Enter N: ";
    cin >> n;

    if (*choice == "6") {
        for (int i = 1; i <= n; i++) cout << i << " ";
        cout << endl;
    }
    else if (*choice == "7") {
        int i = 1;
        while (i <= n) cout << i++ << " ";
        cout << endl;
    }
    else if (*choice == "8") {
        int i = 1;
        do {
            cout << i << " ";
            i++;
        } while (i <= n);
        cout << endl;
    }
}

void sum_1_to_n_for () {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) sum += i;
    cout << "Sum: " << sum << endl;
}

void sum_1_to_n_recursive () {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Sum: " << sum_recursive(n) << endl;
}

// Main Function
int main() {
    int attempts = 0;
    string username, password;
    while (true) {
        if (attempts >= 3) {
            cout << "Too many attempts! Exit program." << endl;
            return 0;
        }
        cout << " Enter username: ";
        cin >> username;
        cout << " Enter password: ";
        cin >> password;
        if( username == "admin" && password == "admin") {
            break;
        } else {
            cout << "Invalid username or password!" << endl;
            attempts++;
        }
    }

    string choice;
    do {
        show_menu();
        cin >> choice;
        if (choice == "1" || choice == "2" || choice == "3" || choice == "4") {
            basic_math_by_choice(&choice);
        }
        else if (choice == "5") {
            calculate_rectangle_area();
        }
        else if (choice == "6" || choice == "7" || choice == "8") {
            display_1_to_n_by_choice(&choice);
        }
        else if (choice == "9") {
            sum_1_to_n_for();
        }
        else if (choice == "10") {
            sum_1_to_n_recursive();
        }
        else if (choice == "Q" || choice == "q") {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice. Try again!" << endl;
        }
    } while (choice != "Q" && choice != "q");

    return 0;
}
