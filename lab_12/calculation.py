def main():
    a = float(input("Enter first number: "))
    b = float(input("Enter second number: "))

    sum_result = a + b
    diff_result = a - b
    prod_result = a * b
    quot_result = a / b

    with open("calculation.txt", "w") as file:
        file.write(f"{a} + {b} = {sum_result}\n")
        file.write(f"{a} - {b} = {diff_result}\n")
        file.write(f"{a} * {b} = {prod_result}\n")
        file.write(f"{a} / {b} = {quot_result}\n")

    print("[บันทึกผลลัพธ์เรียบร้อย!]")

    print("\n[อ่านข้อมูลจากไฟล์ calculation.txt]")
    with open("calculation.txt", "r") as file:
        for line in file:
            print(line.strip())

if __name__ == "__main__":
    main()
