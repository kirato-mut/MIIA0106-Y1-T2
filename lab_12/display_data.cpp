#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <stdexcept>

using namespace std;

struct Employee {
    int id;
    string name;
    int salary;
};

int main() {
    ifstream file("data.csv");
    if (!file) {
        cerr << "Unable to open file data.csv" << endl;
        return 1;
    }

    string line;
    vector<Employee> employees;

    // Skip the header line
    getline(file, line);

    // Read the data
    while (getline(file, line)) {
        stringstream ss(line);
        string id, name, salary;
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, salary, ',');

        try {
            int emp_id = stoi(id);
            int emp_salary = stoi(salary);
            employees.push_back({emp_id, name, emp_salary});
        } catch (const invalid_argument& e) {
            cerr << "Invalid data: " << line << endl;
        } catch (const out_of_range& e) {
            cerr << "Out of range data: " << line << endl;
        }
    }

    file.close();

    // Display the data in table format
    cout << "---------------------------------" << endl;
    cout << "| ID   | Name   | Salary      |" << endl;
    cout << "---------------------------------" << endl;
    for (const auto& emp : employees) {
        cout << "| " << setw(4) << emp.id << " | " << setw(6) << emp.name << " | " << setw(10) << emp.salary << " |" << endl;
    }
    cout << "---------------------------------" << endl;

    return 0;
}