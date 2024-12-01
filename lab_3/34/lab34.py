import random

randomNumber = random.randint(1, 100)
count = 0

print("ยินดีต้อนรับสู่เกมทายตัวเลข!")

while True:
    try:
        userGuess = int(input("กรุณาป้อนตัวเลขของคุณ (1-100): "))

        if userGuess < randomNumber:
            print("ต่ำไป!")
        elif userGuess > randomNumber:
            print("สูงไป!")
        else:
            print(f"ยินดีด้วย! คุณทายถูกต้องใน {count+1} ครั้ง")
            break

        count += 1

    except ValueError:
        print("กรุณาป้อนตัวเลขที่ถูกต้อง")