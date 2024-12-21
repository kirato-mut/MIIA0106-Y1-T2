def add(a, b):
    return a + b
def subtract(a, b):
    return a - b
def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        print("Error: Division by zero!")
        return 0
    return a / b

def sum_recursive(n):
    if n == 0:
        return 0
    return n + sum_recursive(n - 1)

def menu():
    print("\nMenu:")
    print("1. Add Numbers\n2. Subtract Numbers\n3. Multiply Numbers")
    print("4. Divide Numbers\n5. Calculate Rectangle Area")
    print("6. Display 1-N (For Loop)\n7. Display 1-N (While Loop)")
    print("8. Display 1-N (Do While Loop Emulation)")
    print("9. Sum 1-N (For Loop)\n10. Sum 1-N (Recursive)")
    print("Q/q. Quit")

def basic_math_by_choice(choice):
    a = float(input("Enter first number: "))
    b = float(input("Enter second number: "))
    if choice == '1':
        print("Result:", add(a, b))
    elif choice == '2':
        print("Result:", subtract(a, b))
    elif choice == '3':
        print("Result:", multiply(a, b))
    elif choice == '4':
        print("Result:", divide(a, b))  

def calculate_rectangle_area():
    width = float(input("Enter width: "))
    height = float(input("Enter height: "))
    print("Area:", multiply(width, height)) 

def display_1_to_for_loop():
    n = int(input("Enter N: "))
    for i in range(1, n + 1):
        print(i, end=" ")
    print() 

def display_1_to_while_loop():
    n = int(input("Enter N: "))
    i = 1
    while i <= n:
        print(i, end=" ")
        i += 1
    print()

def display_1_to_do_while_loop():
    n = int(input("Enter N: "))
    i = 1
    while True:
        print(i, end=" ")
        i += 1
        if i > n:
            break
    print()

def sum_1_to_for_loop():
    n = int(input("Enter N: "))
    total = sum(range(1, n + 1))
    print("Sum:", total)

def sum_1_to_recursive():
    n = int(input("Enter N: "))
    print("Sum:", sum_recursive(n))

def authentication():
    attempts = 1
    while True :
        if attempts > 3:
            print("Too many attempts! Exit program.\n")
            exit();
        username = input("Enter username: ")
        password = input("Enter password: ")
        if username == "admin" and password == "admin" :
            break
        else:
            print("Invalid username or password!\n")
            attempts += 1

def main():
    authentication()

    while True:
        menu()
        choice = input("Enter your choice: ")

        if choice in ['1', '2', '3', '4']:
            basic_math_by_choice(choice)
        elif choice == '5':
            calculate_rectangle_area()
        elif choice == '6':
            display_1_to_for_loop()
        elif choice == '7':
            display_1_to_while_loop()
        elif choice == '8':
            display_1_to_while_loop()
        elif choice == '9':
            sum_1_to_for_loop()
        elif choice == '10':
           sum_1_to_recursive()
        elif choice.lower() == 'q':
            print("Goodbye!")
            break
        else:
            print("Invalid choice. Try again!")
if __name__ == "__main__":
    main()
