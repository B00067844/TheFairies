#include <iostream>

using namespace std;

//Base class
class Shape
{
public:
    //pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};

class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};

class Rectangle: public Shape

{

public:

    int getArea()

    {
        return width*height;
    }
};

int main(void)
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);
    //Print the area of the project.
    cout<<"Total Triangle area: " << Tri.getArea() <<endl;

    Rectangle Rec;
    Rec.setWidth(5);
    Rec.setHeight(7);

    cout << "Area of Rectangle: " << Rec.getArea() << endl;


    return 0;
}
