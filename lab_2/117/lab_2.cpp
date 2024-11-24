#include <iostream>
using namespace std;

int main() {
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
    cout << "ค่าจ้างก่อนหักภาษี: " << grossSalary << " บาท" << endl;
    cout << "ภาษีที่ต้องจ่าย: " << tax << " บาท" << endl;
    cout << "ค่าจ้างสุทธิ: " << netSalary << " บาท" << endl;
    cout << "--------------------------------" << endl;
    return 0;
}
