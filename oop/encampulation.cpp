#include<bits/stdc++.h>
using namespace std;


class TemperaturConverter {
private:
    double celsius;

public:
    void setterCelsius(double c) {
        celsius = c;
    }

    double getterCelsius() {
        return celsius;
    }

    double ToFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }
};

int main() {
    TemperaturConverter converter;
    converter.setterCelsius(25.0);

    cout << "Temperature in Celsius: " << converter.getterCelsius() << endl;
    cout << "Temperature in Fahrenheit: " << converter.ToFahrenheit() << endl;

    return 0;
}
