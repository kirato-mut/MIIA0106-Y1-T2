#include <iostream>
#include <string>

using namespace std;

enum Pointer { L, C, R, INVALID };

Pointer getPointer(const string& input) {
    if (input == "L" || input == "l") return L;
    if (input == "C" || input == "c") return C;
    if (input == "R" || input == "r") return R;
    return INVALID;
}

int main() {
    while (true) {
        string input;
        cout << "Where is the black line (L | C | R)? ";
        getline(cin, input);

        Pointer pointer = getPointer(input);

        switch (pointer) {
            case L:
                cout << "Move the robot to the left" << endl;
                break;
            case C:
                cout << "Move the robot to the center" << endl;
                break;
            case R:
                cout << "Move the robot to the right" << endl;
                break;
            default:
                cout << "Invalid input" << endl;
                return 0;
        }
    }
    return 0;
}