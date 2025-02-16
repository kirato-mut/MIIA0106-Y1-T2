#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string message;
    cout << "Enter your message: ";
    getline(cin, message);

    ofstream outFile("message.txt");
    outFile << message << endl;
    outFile.close();

    ifstream inFile("message.txt");
    if (inFile) {
        string line;
        cout << "Contents of message.txt:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "The file has no data." << endl;
    }

    return 0;
}

