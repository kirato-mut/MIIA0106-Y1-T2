#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    double sum = a + b;
    double diff = a - b;
    double prod = a * b;
    double quot = a / b;

    ofstream outfile("calculation.txt");
    outfile << a << " + " << b << " = " << sum << endl;
    outfile << a << " - " << b << " = " << diff << endl;
    outfile << a << " * " << b << " = " << prod << endl;
    outfile << a << " / " << b << " = " << quot << endl;
    outfile.close();

    cout << "[บันทึกผลลัพธ์เรียบร้อย!]" << endl;

    ifstream infile("calculation.txt");
    string line;
    cout << "\n[อ่านข้อมูลจากไฟล์ calculation.txt]" << endl;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    return 0;
}
