#include<bits/stdc++.h>
using namespace std;

 
class Parent {
public:
    void Print()
    {
        cout << "Base Function" << endl;
    }
};
 
class Child : public Parent {
public:
    void Print()
    {
        cout << "Derived Function" << endl;
    }
};
 
int main()
{
    Child Child_Derived;
    Child_Derived.Print();
    return 0;
}