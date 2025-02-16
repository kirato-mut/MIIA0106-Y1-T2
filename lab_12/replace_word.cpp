#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream file("data.txt");
    vector<string> lines;

    if (!file) {
        cerr << "Unable to open file data.txt. Creating a new file with default values." << endl;
        vector<string> default_data = {"Hello", "World", "C++", "first initial"};
        ofstream outfile("data.txt");
        for (const auto &l : default_data) {
            outfile << l << endl;
        }
        outfile.close();
        lines = default_data;
    } else {
        string line;
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    }

    string old_word, new_word;
    cout << "Enter word to replace: ";
    cin >> old_word;
    cout << "Enter new word: ";
    cin >> new_word;

    for (auto &l : lines) {
        if (l == old_word) {
            l = new_word;
        }
    }

    ofstream outfile("data.txt");
    for (const auto &l : lines) {
        outfile << l << endl;
    }
    outfile.close();

    cout << "[แก้ไขข้อมูลในไฟล์เรียบร้อย!]" << endl;
    return 0;
}