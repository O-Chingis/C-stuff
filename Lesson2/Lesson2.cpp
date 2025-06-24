#include <iostream>
#include <cmath>
#include <locale>

using std::cout;
using std::endl;

class Shape {
public:
    virtual double area() const = 0; 
    virtual void display() const {
        cout << "Это фигура." << endl;
    }
    virtual ~Shape() {} 
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    void display() const override {
        cout << "Прямоугольник " << width << "x" << height << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    void display() const override {
        cout << "Круг радиусом " << radius << endl;
    }
};

void printArea(const Shape& shape) {
    cout << "Площадь: " << shape.area() << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    Rectangle rect(5, 3);
    Circle circ(4);

    rect.display();
    circ.display();

    printArea(rect);
    printArea(circ);

    Shape* shape1 = &rect;
    Shape* shape2 = &circ;

    cout << "Площадь через базовый класс:" << endl;
    cout << "Прямоугольник: " << shape1->area() << endl;
    cout << "Круг: " << shape2->area() << endl;
	system("pause");
    return 0;
}
