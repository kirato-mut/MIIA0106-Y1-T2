#include <iostream>
using namespace std;

int main() {
    float width, length, area;

    // รับค่าความกว้างและความยาว
    cout << "กรุณาใส่ค่าความกว้าง: ";
    cin >> width;

    cout << "กรุณาใส่ความยาว: ";
    cin >> length;

    // คำนวณพื้นที่
    area = width * length;

    // แสดงผลลัพธ์
    cout << "พื้นที่ของสี่เหลี่ยมผืนผ้าคือ: " << area << endl;

    return 0;
}
