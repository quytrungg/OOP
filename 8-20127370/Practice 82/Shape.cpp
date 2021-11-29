#include "Shape.h"

Point::Point(float x, float y){
    this->_x = x;
    this->_y = y;    
}

std::string Point::toString(){
    std::stringstream ss;
    ss << "(" << this->_x << ", " << this->_y << ")";
    return ss.str();
}

Triangle::Triangle(Point a, Point b, Point c){
    this->A = a;
    this->B = b;
    this->C = c;
}

std::string Triangle::display(){
    std::stringstream ss;
    ss << "Triangle: A = " << this->A.toString() << ", B = " << this->B.toString() << ", C = " << this->C.toString();
    return ss.str();
}

Rectangle::Rectangle(Point ul, Point lr){
    this->UL = ul;
    this->LR = lr;
}

std::string Rectangle::display(){
    std::stringstream ss;
    ss << "Rectangle: Upper left: " << this->UL.toString() << ", Lower right: " << this->LR.toString();
    return ss.str();
}

Circle::Circle(Point c, float r){
    this->center = c;
    this->radius = r;
}

std::string Circle::display(){
    std::stringstream ss;
    ss << "Circle: Center: " << this->center.toString() << ", Radius: " << this->radius;
    return ss.str();
}

void Display::printShapeInfo(std::vector<Triangle> tri, std::vector<Rectangle> rec){
    for(int i = 0; i < tri.size(); i++){
        std::cout << tri[i].display() << "\n";
    }
    for(int i = 0; i < rec.size(); i++){
        std::cout << rec[i].display() << "\n";
    }
}

void Display::printShapeInfo(Shape** sh, int size){
    for(int i = 0; i < size; i++){
        std::cout << sh[i]->display() << "\n";
    }
}

Point RandomShape::randomPoint(int l, int r) {
	return Point(_rng.next(l, r), _rng.next(l, r));
}

Rectangle RandomShape::randomRectangle() {
	return Rectangle(randomPoint(1, 10), randomPoint(1, 10));
}

Triangle RandomShape::randomTriangle() {
	return Triangle(randomPoint(1, 10), randomPoint(1, 10), randomPoint(1, 10));
}

Circle RandomShape::randomCircle() {
	return Circle(randomPoint(1, 10), _rng.next(1, 10));
}

void RandomShape::randomShape(Shape** sh, int n) {
	for(int i = 0; i < n; i++){
        int n = _rng.next(0, 2);
        if(n == 0){
            sh[i] = new Rectangle(randomPoint(1, 10), randomPoint(1, 10));
        }
        else if(n == 1){
            sh[i] = new Triangle(randomPoint(1, 10), randomPoint(1, 10), randomPoint(1, 10));
        }
        else{
            sh[i] = new Circle(randomPoint(1, 10), _rng.next(1, 10));
        }
    }
}
