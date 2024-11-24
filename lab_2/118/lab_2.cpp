#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    cout << "โปรดเลือกเมนู:\n";
    cout << "1. คำนวณพื้นที่ของสี่เหลี่ยมผืนผ้า\n";
    cout << "2. คำนวณปริมาตรของสี่เหลี่ยมผืนผ้า\n";
    cout << "3. คำนวณเงินเดือนของพนักงาน\n";
    cout << "เลือก: ";
    cin >> choice;

    if (choice == 1) {
        float width, length;
        cout << "กรุณาใส่ค่าความกว้าง: ";
        cin >> width;
        cout << "กรุณาใส่ค่าความยาว: ";
        cin >> length;
        cout << "พื้นที่ของสี่เหลี่ยมผืนผ้าคือ: " << width * length << endl;
    }
    else if (choice == 2) {
        float width, length, height;
        cout << "กรุณาใส่ค่าความกว้าง: ";
        cin >> width;
        cout << "กรุณาใส่ค่าความยาว: ";
        cin >> length;
        cout << "กรุณาใส่ค่าความสูง: ";
        cin >> height;
        cout << "ปริมาตรของสี่เหลี่ยมผืนผ้าคือ: " << width * length * height << endl;
    }
    else if (choice == 3) {
        string empID;
        float hoursWorked, hourlyRate, grossSalary, tax, netSalary;
        cout << "รหัสพนักงาน: ";
        cin >> empID;
        cout << "ชั่วโมงทำงาน: ";
        cin >> hoursWorked;
        cout << "อัตราค่าแรง: ";
        cin >> hourlyRate;
        if (hoursWorked>30){
            grossSalary = hoursWorked * (hourlyRate+50);
        } else {
            grossSalary = hoursWorked * hourlyRate;
        }
        tax = grossSalary * 0.07;
        netSalary = grossSalary - tax;
        cout << "--------------------------------" << endl;
        cout << "รหัสพนักงาน: " << empID << endl;
        cout << "ค่าจ้างก่อนหักภาษี: " << fixed << setprecision(2) << grossSalary << " บาท" << endl;
        cout << "ภาษีที่ต้องจ่าย: " << fixed << setprecision(2) << tax << " บาท" << endl;
        cout << "ค่าจ้างสุทธิ: " << fixed << setprecision(2) << netSalary << " บาท" << endl;
        cout << "--------------------------------" << endl;
    }
    else {
        cout << "เมนูไม่ถูกต้อง!" << endl;
    }

    return 0;
}
