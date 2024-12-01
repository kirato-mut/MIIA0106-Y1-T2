#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    while(true){
    int choice;
    cout << "โปรดเลือกเมนู:\n";
    cout << "1. [ For loop ]\n";
    cout << "2. [ While loop ]\n";
    cout << "3. [ Do-while loop ]\n";
    cout << "เลือก: ";
    cin >> choice;

    switch (choice) {
        case 1:
            for (int i = 1; i <= 10; i++) {
                cout << i << setw(3);
            }
            break;
        case 2:
            {
                int i = 1;
                while (i <= 10) {
                    cout << i << setw(3);
                    i++;
                }
            }
            break;
        case 3:
            {
                int i = 1;
                do {
                    cout << i << setw(3);
                    i++;
                } while (i <= 10);
            }
            break;
        default:
            cout << endl << "เมนูไม่ถูกต้อง!" << endl;
            break;
    }

    cout << endl << "กด 0 เพื่อออกจากโปรแกรมหรืออื่นๆเพื่อใช้งานต่อ: ";
    cin >> choice;
    if (choice == 0) {
        break;
        }
    }

    return 0;
}
