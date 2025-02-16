message = input("Enter your message: ")

with open("message.txt", "w") as outFile:
    outFile.write(message + "\n")

try:
    with open("message.txt", "r") as inFile:
        print("Contents of message.txt:")
        for line in inFile:
            print(line, end="")
except FileNotFoundError:
    print("The file has no data.")
