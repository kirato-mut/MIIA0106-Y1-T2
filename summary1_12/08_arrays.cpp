#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 9, 2, 5};
    int max_val = arr[0];
    for (int num : arr) {
        if (num > max_val) max_val = num;
    }
    cout << "Max: " << max_val << endl;
    return 0;
}
