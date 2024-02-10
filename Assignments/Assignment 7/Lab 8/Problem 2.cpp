#include <iostream>
using namespace std;

class Circle{
    private:
    int xcoC;
    int ycoC;
    int radi;

    public:
    float area;
    float circumference;
    Circle(int x, int y, int r);
    void ComputeArea(int value);
    float GetArea();
    void ComputeCircumference(int value);
    float GetCircumference();
    void setRadius(int value);
    void setYco(int value);
    void setXco(int value);
};

Circle::Circle (int x, int y, int r)
{
    xcoC = x; ycoC = y; radi = r;
}
void Circle::setRadius(int value)
{
    radi = value;
}
void Circle::setXco(int value)
{
    xcoC = value;
}
void Circle::setYco(int value)
{
    ycoC = value;
}
void Circle::ComputeArea(int value)
{
    area = (3.14)*(radi)*(radi);
}
float Circle::GetArea()
{
    return area;
}
void Circle::ComputeCircumference(int value)
{
    circumference = (2)*(3.14)*(radi);
}
float Circle::GetCircumference()
{
    return circumference;
}
int main ()
{
    int rad; int xco; int yco; 

    cout << "Enter Circle variables: "<< endl;
    cout << "-----------------------"<< endl << endl;
    cout << "Radius: ";
    cin >> rad;
    cout << "X-Coordinate of Center: ";
    cin >> xco;
    cout << "Y-Coordinate of Center: ";
    cin >> yco;

    cout << endl;

    Circle c(xco, yco, rad);

    c.ComputeArea(rad);
    c.ComputeCircumference(rad);

    cout << "The area of circle = " << c.GetArea() << endl;
    cout << "The circumference of the circle = "<< c.GetCircumference() << endl;

    return 0;

}