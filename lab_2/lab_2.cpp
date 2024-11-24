#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number;
    cout << "กรุณาระบุตัวเลขที่จะตรวจสอบ: ";
    cin >> number;
    cout << "เลข " << number << " เป็นเลข"; ;
    if (number % 2 == 0) {
        cout << "คู่" << endl;
    } else {
        cout << "คี่" << endl;
    }

    return 0;
}
