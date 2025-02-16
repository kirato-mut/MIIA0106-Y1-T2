def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b != 0:
        return a / b
    else:
        print("Error: Division by zero!")
        return 0

def main():
    num1 = float(input("Enter first number: "))
    operation = input("Enter an operator (+, -, *, /): ")
    num2 = float(input("Enter second number: "))

    if operation == '+':
        print("Result:", add(num1, num2))
    elif operation == '-':
        print("Result:", subtract(num1, num2))
    elif operation == '*':
        print("Result:", multiply(num1, num2))
    elif operation == '/':
        print("Result:", divide(num1, num2))
    else:
        print("Error: Invalid operator!")

if __name__ == "__main__":
    main()