class Animal:
    def sound(self):
        print("Animal sound")

class Dog(Animal):
    def sound(self):
        print("Woof!")

dog = Dog()
dog.sound()
