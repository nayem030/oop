class TemperatureConverter:
    
    __celsius = 0.0  

    
    def setter_celsius(self, c):
        self.__celsius = c

    
    def getter_celsius(self):
        return self.__celsius

    
    def to_fahrenheit(self):
        return (self.__celsius * 9.0 / 5.0) + 32

converter = TemperatureConverter()
converter.setter_celsius(25.0)

print("Temperature in Celsius:", converter.getter_celsius())
print("Temperature in Fahrenheit:", converter.to_fahrenheit())
