def main():
    while True:
        choice = int(input("โปรดเลือกเมนู:\n1. [ For loop ]\n2. [ While loop ]\n3. [ Do-while loop ]\nเลือก: "))

        match choice:
            case 1:
                for i in range(1, 11):
                    print(f"{i:3}", end="")
            case 2:
                i = 1
                while i <= 10:
                    print(f"{i:3}", end="")
                    i += 1
            case 3:
                i = 1
                while True:
                    print(f"{i:3}", end="")
                    i += 1
                    if i > 10:
                        break
            case _:
                print("\nเมนูไม่ถูกต้อง!")

        choice = int(input("\nกด 0 เพื่อออกจากโปรแกรมหรืออื่นๆเพื่อใช้งานต่อ: "))
        if choice == 0:
            break

if __name__ == "__main__":
    main()