#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void logActivity() {
    ofstream logFile("log.txt", ios_base::app);
    if (logFile.is_open()) {
        time_t now = time(nullptr);
        logFile << "User started the program at " << ctime(&now);
        logFile.close();
        cout << "[บันทึกการใช้งานลงไฟล์เรียบร้อย]\n";
    } else {
        cerr << "Unable to open log file.\n";
    }
}

void readLog() {
    ifstream logFile("log.txt");
    if (logFile.is_open()) {
        cout << "\n[อ่านข้อมูลจาก log.txt]\n";
        string line;
        while (getline(logFile, line)) {
            cout << line << "\n";
        }
        logFile.close();
    } else {
        cerr << "Unable to open log file.\n";
    }
}

int main() {
    logActivity();
    readLog();
    return 0;
}
