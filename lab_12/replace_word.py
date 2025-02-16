def replace_word_in_file(file_path, old_word, new_word):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    with open(file_path, 'w') as file:
        for line in lines:
            if line.strip() == old_word:
                file.write(new_word + '\n')
            else:
                file.write(line)

if __name__ == "__main__":
    file_path = 'data.txt'
    old_word = input("Enter word to replace: ")
    new_word = input("Enter new word: ")
    replace_word_in_file(file_path, old_word, new_word)
    print("[แก้ไขข้อมูลในไฟล์เรียบร้อย!]")
