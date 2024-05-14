#include<bits/stdc++.h>
using namespace std;

class Room {
    public:
        int length;
        int  width;
        int height;   

        int area(){   
            return length * width;
        }

        double volume(){   
            return length * width * height;
        }

};

int main()
{
    Room r1;
    r1.height=4;
    r1.width=5;
    r1.height=6;
    cout<<r1.area()<<endl;
    cout<<r1.volume()<<endl;
}