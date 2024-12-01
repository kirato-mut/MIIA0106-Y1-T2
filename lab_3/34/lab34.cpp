#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int count = 0;
    int userGuess;

    cout << "ยินดีต้อนรับสู่เกมทายตัวเลข!" << endl;

    while (true) {
        cout << "กรุณาป้อนตัวเลขของคุณ (1-100): ";
        cin >> userGuess;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(INT_MAX, '\n');
            cout << "กรุณาป้อนตัวเลขที่ถูกต้อง" << endl;
            continue;
        }

        if (userGuess < randomNumber) {
            cout << "ต่ำไป!" << endl;
        } else if (userGuess > randomNumber) {
            cout << "สูงไป!" << endl;
        } else {
            cout << "ยินดีด้วย! คุณทายถูกต้องใน " << count + 1 << " ครั้ง" << endl;
            break;
        }

        count++;
    }

    return 0;
}