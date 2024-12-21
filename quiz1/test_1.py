def main():
    name = input("Enter your full name: ")
    student_id = input("Enter your student ID: ")
    print("Enter your date of birth")
    DD = int(input("DD = "))
    MM = int(input("MM = "))
    YYYY = int(input("YYYY = "))

    print("\nSaved Information:")
    print(f"Full Name: {name}")
    print(f"Student ID: {student_id}")
    print(f"Date of Birth: {DD}/{MM}/", end="")
    if YYYY > 2500:
        print(f"{YYYY - 543} (BE)")
        print(f"You are {2567 - YYYY} years old.")
    else:
        print(f"{YYYY+543} (AD)")
        print(f"You are {2567 - (YYYY + 543)} years old.")

if __name__ == "__main__":
    main()