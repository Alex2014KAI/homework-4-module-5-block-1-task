#include <iostream>

class Figure {
protected:
    std::string _name;
    int _numberSides;
    int getNumberSides();
    std::string getName();
public:
    Figure() : _name("Фигура"), _numberSides(0){};
    void printData();
};

class Triangle : public Figure {
public:
    Triangle() : Figure() {
        _name = "Треугольник";
        _numberSides = 3;
    };
};

class Quadrilateral : public Figure {
public:
    Quadrilateral() : Figure() {
        _name = "Четырёхугольник";
        _numberSides = 4;
    };
};


int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figure;
    Triangle triangle;
    Quadrilateral quadrilateral;

    std::cout << "Количество сторон:" << std::endl;
    figure.printData();
    triangle.printData();
    quadrilateral.printData();
};



int Figure::getNumberSides() {
    return _numberSides;
};

std::string Figure::getName() {
    return _name;
};

void Figure::printData() {
    std::cout << _name << ": " << _numberSides << std::endl;
}