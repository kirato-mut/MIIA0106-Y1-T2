#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

map<string, string> read_config(const string& file_path) {
    map<string, string> config;
    ifstream file(file_path);
    string line;
    while (getline(file, line)) {
        size_t pos = line.find('=');
        if (pos != string::npos) {
            string key = line.substr(0, pos);
            string value = line.substr(pos + 1);
            config[key] = value;
        }
    }
    return config;
}

void display_config(const map<string, string>& config) {
    cout << "[Robot Configuration]" << endl;
    cout << "Speed: " << config.at("speed") << " m/s" << endl;
    cout << "Max Distance: " << config.at("max_distance") << " cm" << endl;
    cout << "Mode: " << config.at("mode") << endl;
}

int main() {
    map<string, string> config = read_config("config.txt");
    display_config(config);
    return 0;
}
