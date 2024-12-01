from enum import Enum

class Pointer(Enum):
    L = 'L'
    C = 'C'
    R = 'R'

def main():
    while True:
        pointer_input = input("Where is the black line (L | C | R)? ").strip().upper()
        try:
            pointer = Pointer(pointer_input)
            if pointer == Pointer.L:
                print("Move the robot to the left")
            elif pointer == Pointer.C:
                print("Move the robot to the center")
            elif pointer == Pointer.R:
                print("Move the robot to the right")
        except ValueError:
            print("Invalid input")
            break

if __name__ == "__main__":
    main()
