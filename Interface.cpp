#include <bits/stdc++.h>
using namespace std;
class Shape
{
    /*
This class is an abstract class which is also called "Interface", as it has one pure virtual function.
abstract class can have many functions but one pure vitual function should be there.
child class should extend all virtual functions, else will not be allowed to initiate instance of the that child class.
Attempting to instantiate an object of an abstract class causes a compilation error.

*/
protected:
    int length;
    int breadth;

public:
    virtual int getArea() = 0;
    void setLength(int l)
    {
        this->length = l;
    }
    void setBreadth(int b)
    {
        this->breadth = b;
    }
};
class Triangle : public Shape
{
public:
    int getArea()
    {
        return (length * breadth) / 2;
    }
};
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (length * breadth);
    }
};
int main()
{
    // Shape s;
     Triangle t;
    Rectangle r;
    t.setBreadth(4);
    t.setLength(3);
    r.setBreadth(4);
    r.setLength(3);
    cout<<t.getArea();
    cout<<"\n";
    cout<<r.getArea();
    
}