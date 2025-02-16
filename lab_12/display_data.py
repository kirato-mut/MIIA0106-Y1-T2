import csv

employees = []

# Read the data from the CSV file
with open('data.csv', newline='') as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        employees.append(row)

# Display the data in table format
print("---------------------------------")
print("| ID   | Name   | Salary      |")
print("---------------------------------")
for emp in employees:
    print(f"| {emp['ID']:4} | {emp['Name']:6} | {emp['Salary']:10} |")
print("---------------------------------")
