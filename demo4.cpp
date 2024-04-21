// shap Hierarchy:
// problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry.
#include<iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double area() const override {
        
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(5);
    cout << "Circle Area: " << circle.area() << ", Perimeter: " << circle.perimeter() << std::endl;

    Rectangle rectangle(4, 6);
    cout << "Rectangle Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << std::endl;

    Triangle triangle(3, 4, 5);
    cout << "Triangle Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() << std::endl;

    return 0;
}