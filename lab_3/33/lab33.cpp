#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 1; i <= 25; i++) {
        cout << "01 x " << setw(2) << i << " = " << setw(3) << 01 * i << endl;
    }
    return 0;
}
