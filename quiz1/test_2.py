def main():
    employeeID = input("Enter employee ID: ")
    fullName = input("Enter name: ")
    workdaysMonFri = int(input("Number of workdays (Mon-Fri): "))
    workdaysSat = int(input("Number of workdays (Saturday): "))
    workdaysSun = int(input("Number of workdays (Sunday): "))
    workdaysSpecial = int(input("Number of workdays (special holidays): "))

    totalIncome = (workdaysMonFri * 2000) + (workdaysSat * 2000 * 1.5) + (workdaysSun * 2000 * 2) + (workdaysSpecial * 2000 * 2.5)
    withholdingTax = totalIncome * 0.03
    netIncome = totalIncome - withholdingTax

    print("\nEmployee Information:")
    print(f"Employee ID: {employeeID}")
    print(f"Full Name: {fullName}")
    print(f"Total Income: {totalIncome} THB")
    print(f"Withholding Tax (3%): {withholdingTax} THB")
    print(f"Net Income: {netIncome} THB")

if __name__ == "__main__":
    main()