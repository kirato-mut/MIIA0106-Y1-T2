#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (cin.fail()) {
        cout << "Please enter a valid integer." << endl;
        return 1;
    }

    if (is_prime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}