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
