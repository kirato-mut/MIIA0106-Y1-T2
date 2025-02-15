#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person p = {"Alice", 30};
    cout << p.name << " is " << p.age << " years old." << endl;
    return 0;
}
