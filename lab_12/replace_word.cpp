#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream file("data.txt");
    if (!file) {
        cerr << "Unable to open file data.txt";
        return 1;
    }

    vector<string> lines;
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();

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
