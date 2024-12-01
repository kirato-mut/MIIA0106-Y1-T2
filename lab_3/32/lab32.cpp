#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "Sum of 1 to 100 = " << sum << endl;
    return 0;
}
