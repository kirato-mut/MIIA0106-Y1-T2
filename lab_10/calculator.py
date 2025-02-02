class Calculator:
    def add(self, a, b):
        return a + b

class SubtractionCalculator(Calculator):
    def subtract(self, a, b):
        return a - b

class MultiplicationCalculator(SubtractionCalculator):
    def multiply(self, a, b):
        return a * b

class DivisionCalculator(MultiplicationCalculator):
    def divide(self, a, b):
        if b == 0:
            return "Cannot divide by zero"
        return a / b

if __name__ == "__main__":
    mul_calc = DivisionCalculator()

    print(f"Addition (10 + 5): {mul_calc.add(10, 5)}")

    print(f"Subtraction (10 - 5): {mul_calc.subtract(10, 5)}")

    print(f"Multiplication (10 * 5): {mul_calc.multiply(10, 5)}")

    print(f"Division (10 / 5): {mul_calc.divide(10, 5)}")

    print(f"Division (10 / 0): {mul_calc.divide(10, 0)}")

