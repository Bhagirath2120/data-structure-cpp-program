#include <iostream>
using namespace std;

class Ractangle
{
    int length, breadth;
public:

    Ractangle(int x, int y)
    { 
        length = x;
        breadth = y;
    }

    Ractangle(int x)
    { 
        length = x;
       breadth=1;
    }

     Ractangle()
    {
        length=1 ;
        breadth=1;
    }

    int area()
    {
        
        return length*breadth;
    }
};
int main()
{
    int a, b;
    cin >> a >> b;
    Ractangle r1(a, b);
    Ractangle r2(a);
    Ractangle r3;

    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area()<<endl;
    
}