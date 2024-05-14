#include<bits/stdc++.h>
using namespace std;

class overload{
    public:
     void add(int a, int b)
     {
        cout<<a+b;
     }
      void add(int a, int b, int c)
     {
        cout<<a+b+c;
     }
      void add()
     {
        cout<<"Nothing to add";
     }
};

int main()
{
    overload obj;
    obj.add();
    obj.add(10,20);
    obj.add(10,20,40);
}