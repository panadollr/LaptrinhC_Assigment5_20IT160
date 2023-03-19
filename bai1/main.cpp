#include "Circle.h"

main(){
    double radius;
    cout << "Nhap ban kinh: "; cin >> radius;
    Circle circle1(radius);
    cout << "Dien tich : " << circle1.getArea() << 
    ", Duong kinh: " << circle1.getDiameter()
     << ", Circumeference: " << circle1.getCircumference() << endl;
}