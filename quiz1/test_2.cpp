
#include <iostream>
#include <string>
using namespace std;

int main(){
    string employeeID, fullName;
    int workdaysMonFri, workdaysSat, workdaysSun, workdaysSpecial;
    double totalIncome, withholdingTax, netIncome;

    cout << "Enter employee ID: ";
    cin >> employeeID;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, fullName);
    cout << "Number of workdays (Mon-Fri): ";
    cin >> workdaysMonFri;
    cout << "Number of workdays (Saturday): ";
    cin >> workdaysSat;
    cout << "Number of workdays (Sunday): ";
    cin >> workdaysSun;
    cout << "Number of workdays (special holidays): ";
    cin >> workdaysSpecial;

    totalIncome = (workdaysMonFri * 2000) + (workdaysSat * 2000 * 1.5) + (workdaysSun * 2000 * 2) + (workdaysSpecial * 2000 * 2.5);
    withholdingTax = totalIncome * 0.03;
    netIncome = totalIncome - withholdingTax;

    cout << endl << "Employee Information:" << endl;
    cout << "Employee ID: " << employeeID << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Total Income: " << totalIncome << " THB" << endl;
    cout << "Withholding Tax (3%): " << withholdingTax << " THB" << endl;
    cout << "Net Income: " << netIncome << " THB" << endl;

    return 0;
}