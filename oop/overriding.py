class Parent:
    def print_massage(self):
        print("Base Function")

class Child(Parent):
    def print_massage(self):
        print("Derived Function")


child_instance = Child()
child_instance.print_massage()
