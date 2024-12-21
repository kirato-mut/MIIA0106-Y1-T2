#include <iostream>
#include <string>
using namespace std;

int main(){
    const string admin = "admin";
    const string password = "6711860001";
    char choice;

    while (true){
        string user, pass;
        cout << "Enter user: ";
        cin >> user;
        cout << "Enter password: ";
        cin >> pass;

        if (user == admin && pass == password){
            cout << "เข้าสู่ระบบสำเร็จ!" << endl;
            
            while(true) {
                int num1, num2;
                cout << "Menu:\n1. Descending order of numbers (using while loop)\n2. Find prime numbers in a range (two numbers input)\n3. Prime numbers from 1 to 100\nEnter your choice: ";
                cin >> choice;
                switch (choice) {
                    case '1':
                        cout << "Enter two numbers: " << endl;
                        cin >> num1;
                        cin >> num2;
                        while (num1 <= num2){
                            cout << "The first number must be greater than the second. Please try again." << endl;
                            cout << "Enter two numbers: ";
                            cin >> num1;
                            cin >> num2;
                        }
                        cout << "The numbers in descending order are: " << endl;
                        while (num1 >= num2){
                            cout << num1 << endl;
                            num1--;
                        }
                        break;
                    case '2':
                        cout << "Enter two numbers: " << endl;
                        cin >> num1;
                        cin >> num2;
                        while (num1 <= num2){
                            cout << "The first number must be greater than the second. Please try again." << endl;
                            cout << "Enter two numbers: ";
                            cin >> num1 >> num2;
                        }
                        cout << "Prime numbers between " << num1 << " and " << num2 << " are: " << endl;
                        for (int i = num2; i <= num1; i++){
                            bool isPrime = true;
                            
                            for (int j = 2; j <= i/2; j++){
                                if (i % j == 0){
                                    isPrime = false;
                                    break;
                                }
                            }
                            
                            if (isPrime){
                                cout << i << endl;
                            }
                        }
                        break;
                    case '3':
                        for (int i = 2; i <= 100; i++){
                            bool isPrime = true;

                            for (int j = 2; j <= i/2; j++){
                                if (i % j == 0){
                                    isPrime = false;
                                    break;
                                }
                            }
                            
                            if (isPrime){
                                cout << i << endl;
                            }
                        }
                        break;
                    case 'q':
                        cout << "Exiting the program. Goodbye!" << endl;
                        return 0;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
            }

        } else {
            cout << "user หรือ password ไม่ถูกต้อง กรุณาลองใหม่" << endl;
        }
    }

}