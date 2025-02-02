#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

class SubtractionCalculator : public Calculator {
public:
    int subtract(int a, int b) {
        return a - b;
    }
};

class MultiplicationCalculator : public SubtractionCalculator {
public:
    int multiply(int a, int b) {
        return a * b;
    }
};

class DivisionCalculator : public MultiplicationCalculator {
public:
    int divide(int a, int b) {
        if(b == 0) {
            cout << "Error: Cannot divide by zero." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    DivisionCalculator mulCalc;

    cout << "Addition (10 + 5): " << mulCalc.add(10, 5) << endl;

    cout << "Subtraction (10 - 5): " << mulCalc.subtract(10, 5) << endl;

    cout << "Multiplication (10 * 5): " << mulCalc.multiply(10, 5) << endl;

    cout << "Division (10 / 5): " << mulCalc.divide(10, 5) << endl;

    cout << "Division (10 / 0): " << mulCalc.divide(10, 0) << endl;

    return 0;
}