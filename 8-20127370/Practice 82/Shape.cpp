#include "Shape.h"

//Construct for point
Point::Point(float x, float y){
    this->_x = x;
    this->_y = y;    
}

//Change point to string to display
std::string Point::toString(){
    std::stringstream ss;
    ss << "(" << this->_x << ", " << this->_y << ")";
    return ss.str();
}

//Constructor for triangle
Triangle::Triangle(Point a, Point b, Point c){
    this->A = a;
    this->B = b;
    this->C = c;
}

//Change triangle to string to display
std::string Triangle::display(){
    std::stringstream ss;
    ss << "Triangle: A = " << this->A.toString() << ", B = " << this->B.toString() << ", C = " << this->C.toString();
    return ss.str();
}

//Constructor for rectangle
Rectangle::Rectangle(Point ul, Point lr){
    this->UL = ul;
    this->LR = lr;
}

//Change rectangle to string to display
std::string Rectangle::display(){
    std::stringstream ss;
    ss << "Rectangle: Upper left: " << this->UL.toString() << ", Lower right: " << this->LR.toString();
    return ss.str();
}

//Constructor for circle
Circle::Circle(Point c, float r){
    this->center = c;
    this->radius = r;
}

//Change circle to string to display
std::string Circle::display(){
    std::stringstream ss;
    ss << "Circle: Center: " << this->center.toString() << ", Radius: " << this->radius;
    return ss.str();
}

//Print the shape info from triangle and rectangle vector
void Display::printShapeInfo(std::vector<Triangle> tri, std::vector<Rectangle> rec){
    for(int i = 0; i < tri.size(); i++){
        std::cout << tri[i].display() << "\n";
    }
    for(int i = 0; i < rec.size(); i++){
        std::cout << rec[i].display() << "\n";
    }
}

//Print the shape info by using polymorphism
void Display::printShapeInfo(Shape** sh, int size){
    for(int i = 0; i < size; i++){
        std::cout << sh[i]->display() << "\n";
    }
}

//Random a point
Point RandomShape::randomPoint(int l, int r) {
	return Point(_rng.next(l, r), _rng.next(l, r));
}

//Random a rectangle object
Rectangle RandomShape::randomRectangle() {
	return Rectangle(randomPoint(1, 10), randomPoint(1, 10));
}

//Random a triangle object
Triangle RandomShape::randomTriangle() {
	return Triangle(randomPoint(1, 10), randomPoint(1, 10), randomPoint(1, 10));
}

//Random a circle object
Circle RandomShape::randomCircle() {
	return Circle(randomPoint(1, 10), _rng.next(1, 10));
}

//Random a shape
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
