#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string text = "hello";
    reverse(text.begin(), text.end());
    cout << text << endl;
    return 0;
}
