def main():
    print("โปรดเลือกเมนู:")
    print("1. คำนวณพื้นที่ของสี่เหลี่ยมผืนผ้า")
    print("2. คำนวณปริมาตรของสี่เหลี่ยมผืนผ้า")
    print("3. คำนวณเงินเดือนของพนักงาน")
    choice = int(input("เลือก: "))

    if choice == 1:
        width = float(input("กรุณาใส่ค่าความกว้าง: "))
        length = float(input("กรุณาใส่ค่าความยาว: "))
        print(f"พื้นที่ของสี่เหลี่ยมผืนผ้าคือ: {width * length}")
    elif choice == 2:
        width = float(input("กรุณาใส่ค่าความกว้าง: "))
        length = float(input("กรุณาใส่ค่าความยาว: "))
        height = float(input("กรุณาใส่ค่าความสูง: "))
        print(f"ปริมาตรของสี่เหลี่ยมผืนผ้าคือ: {width * length * height}")
    elif choice == 3:
        empID = input("รหัสพนักงาน: ")
        hoursWorked = float(input("ชั่วโมงทำงาน: "))
        hourlyRate = float(input("อัตราค่าแรง: "))
        
        if hoursWorked > 30:
            grossSalary = hoursWorked * (hourlyRate + 50)
        else:
            grossSalary = hoursWorked * hourlyRate
        
        tax = grossSalary * 0.07
        netSalary = grossSalary - tax
        
        print("--------------------------------")
        print(f"รหัสพนักงาน: {empID}")
        print(f"ค่าจ้างก่อนหักภาษี: {grossSalary:.2f} บาท")
        print(f"ภาษีที่ต้องจ่าย: {tax:.2f} บาท")
        print(f"ค่าจ้างสุทธิ: {netSalary:.2f} บาท")
        print("--------------------------------")
    else:
        print("เมนูไม่ถูกต้อง!")

if __name__ == "__main__":
    main()
