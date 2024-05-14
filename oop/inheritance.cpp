
#include<bits/stdc++.h>
using namespace std;

class Animal {

   public:
    void eat() {
        cout << "I can eat" << endl;
    }

    void sleep() {
        cout << "I can sleep" << endl;
    }
};

class Dog : public Animal {
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    Dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();

    return 0;
}