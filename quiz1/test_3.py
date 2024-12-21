def main():
    admin = 'admin'
    password = '6711860001'
    
    while(1) :
        user = input("Enter user: ")
        passw = input("Enter password: ")
        if user == admin and passw == password :
            print("เข้าสู่ระบบสำเร็จ!\n")
            while(1) :
                choice = input("Menu:\n1. Descending order of numbers (using while loop)\n2. Find prime numbers in a range (two numbers input)\n3. Prime numbers from 1 to 100\nEnter your choice: ")
                match choice:
                    case "1":
                        num1 = int(input("Enter two numbers: "))
                        num2 = int(input())
                        while num1 <= num2:
                            print("The first number must be greater than the second. Please try again.")
                            num1 = int(input("Enter two numbers: "))
                            num2 = int(input())
                        print("The numbers in descending order are: ")
                        while num1 >= num2:
                            print(num1)
                            num1 -= 1
                    case "2":
                        num1 = int(input("Enter two numbers: "))
                        num2 = int(input())
                        while num1 <= num2:
                            print("The first number must be greater than the second. Please try again.")
                            num1 = int(input("Enter two numbers: "))
                            num2 = int(input())
                        print(f"Prime numbers between {num1} and {num2} are: ")
                        for i in range(num2, num1+1):
                            is_prime = True
                            for j in range(2, i//2+1):
                                if i % j == 0:
                                    is_prime = False
                                    break
                            if is_prime:
                                print(i)
                    case "3":
                        print("Prime numbers between 1 and 100 are: ")
                        for i in range(2, 100+1):
                            is_prime = True
                            for j in range(2, i//2+1):
                                if i % j == 0:
                                    is_prime = False
                                    break
                            if is_prime:
                                print(i)
                    case "q":
                        print("Exiting the program. Goodbye!\n")
                        exit()
                    case _:
                        print("Invalid choice. Please try again.\n")
        else :
            print("user หรือ password ไม่ถูกต้อง กรุณาลองใหม่")

if __name__ == "__main__":
    main()