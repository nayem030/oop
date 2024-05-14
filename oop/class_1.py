class Room:
   
    length = 0
    width = 0
    height = 0

    def area(self):
        return self.length * self.width

    def volume(self):
        return self.length * self.width * self.height


r1 = Room()
r1.height = 4
r1.width = 5
r1.length = 6
print(r1.area())
print(r1.volume())
