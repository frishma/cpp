#include <iostream>
#include <cmath>
using namespace std;

class GeometricObject {
public:
    GeometricObject(){
        color = "white";
        filled = false;
    }
    GeometricObject(string color, bool filled){
         this->color = color;
         this->filled = filled;
    }
    string getColor(){
        return color;
    }
    void setColor(string color){
         this->color = color;
    }
    bool isFilled(){
        return filled;
    }
    void setFilled(bool filled){
         this->filled = filled;
    }
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
private:
    string color;
    bool filled;
};

class Triangle: public GeometricObject {
public:
    Triangle() {
        side1 = side2 = side3 = 1.0;
    }
    Triangle(double side1, double side2, double side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }
    double getSide1() {
        return side1;
    }
    void setSide1(double side1) {
         this->side1 = side1;
    }
    double getSide2() {
        return side2;
    }
    void setSide2(double side2) {
         this->side2 = side2;
    }
    double getSide3() {
        return side3;
    }
    void setSide3(double side3) {
         this->side3 = side3;
    }
    double getArea() {
        double s = (side1 + side2 + side3) / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double getPerimeter() {
        return side1 + side2 + side3;
    }
private:
    double side1, side2, side3;
};

int main() {
    double side1, side2, side3;
    string color;
    char filled;

    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    cout << "Enter a color for the triangle: ";
    cin >> color;

    cout << "Do you want the triangle to be filled (y/n)? ";
    cin >> filled;

    bool isFilled = false;
    if (filled == 'y' || filled == 'Y') {
        isFilled = true;
    }

    Triangle t(side1, side2, side3);
    t.setColor(color);
    t.setFilled(isFilled);

    cout << "The area is " << t.getArea() << endl;
    cout << "The perimeter is " << t.getPerimeter() << endl;
    cout << "The color is " << t.getColor() << endl;
    if (t.isFilled()) {
        cout << "The triangle is filled" << endl;
    } else {
        cout << "The triangle is not filled" << endl;
    }

    return 0;
}
