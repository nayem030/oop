from abc import ABC, abstractmethod

class Abstarct_class(ABC):
    def __init__(self, v1,v2):
        self.value_1=v1
        self.value_2=v2
    
    @abstractmethod
    def area(self):
        pass
    

class Triangle(Abstarct_class):
    def area(self):
        a=0.5*self.value_1*self.value_2
        print("The area is:",a)
        
t=Triangle(10,20)
t.area()
        
    
    