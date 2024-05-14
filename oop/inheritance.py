class Animal:
    def eat(self):
        print("I can eat")

    def sleep(self):
        print("I can sleep")

class Dog(Animal):
    def bark(self):
        print("I can bark Woof woof")


d = Dog()
d.eat()
d.sleep()
d.bark()
