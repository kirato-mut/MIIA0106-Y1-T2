def main():
    number = int(input("กรุณาระบุตัวเลขที่จะตรวจสอบ: "))
    print(f"เลข {number} เป็นเลข", end="")
    if number % 2 == 0:
        print("คู่")
    else:
        print("คี่")

if __name__ == "__main__":
    main()
