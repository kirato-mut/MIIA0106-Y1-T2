import datetime

def log_activity():
    with open("log.txt", "a") as log_file:
        now = datetime.datetime.now()
        log_file.write(f"User started the program at {now.strftime('%Y-%m-%d %H:%M:%S')}\n")
        print("[บันทึกการใช้งานลงไฟล์เรียบร้อย]")

def read_log():
    try:
        with open("log.txt", "r") as log_file:
            print("\n[อ่านข้อมูลจาก log.txt]")
            for line in log_file:
                print(line, end="")
    except FileNotFoundError:
        print("Unable to open log file.")

if __name__ == "__main__":
    log_activity()
    read_log()
