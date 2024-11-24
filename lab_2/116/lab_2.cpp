#include <iostream>
using namespace std;

int main() {
    float width, length, height;
    cout << "กรุณาใส่ค่าความกว้าง: ";
    cin >> width;
    cout << "กรุณาใส่ค่าความยาว: ";
    cin >> length;
    cout << "กรุณาใส่ค่าความสูง: ";
    cin >> height;
    float volumn = width * length * height;
    cout << "ปริมาตรของสี่เหลี่ยมผืนผ้าคือ: " << volumn << endl;
    return 0;
}
