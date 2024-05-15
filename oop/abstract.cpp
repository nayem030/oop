#include<bits/stdc++.h>
using namespace std;


class Abstract{
public:
    virtual void area() = 0; 
};

class Triangle : public Abstract{
private:
    int value_1;
    int value_2;
public:
    Triangle(int v1, int  v2) : value_1(v1), value_2(v2) {}

    void area() override {
        double a = 0.5 * value_1 * value_2;
        std::cout << "The area is: " << a << std::endl;
    }
};

int main() {
    Triangle t(10, 20);
    t.area();
    return 0;
}
