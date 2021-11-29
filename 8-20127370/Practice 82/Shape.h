#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <iostream>
#include <vector>
#include <sstream>

class Point{
private:
    float _x;
    float _y;
public:
    Point(){}
    Point(float x, float y);
    std::string toString();
};

class Shape {
public:
    Shape(){}
    virtual std::string display() = 0;
};

class Triangle : public Shape{
private:
    Point A, B, C;
public:
    Triangle(){}
    Triangle(Point A, Point B, Point C);
    std::string display();
};

class Rectangle : public Shape{
private:
    Point UL;
    Point LR;
public:
    Rectangle(){}
    Rectangle(Point ul, Point lr);
    std::string display();
};
class Circle : public Shape{
private:
    Point center;
    float radius;
public:
    Circle(){}
    Circle(Point c, float r);
    std::string display();
};

class Display{
public:
    void printShapeInfo(std::vector<Triangle> tri, std::vector<Rectangle> rec);
    void printShapeInfo(Shape** sh, int size);
};

class RandomIntegerGenerator{
public:
	RandomIntegerGenerator() { srand(time(NULL)); }
	int next() { return rand(); }
	int next(int ceiling) { return rand() % ceiling; }
	int next(int left, int right) { return left + rand() % (right + 1 - left); }
};

class RandomShape{
private:
	RandomIntegerGenerator _rng;
	Point randomPoint(int l, int r);
public:
    Rectangle randomRectangle();
	Triangle randomTriangle();
	Circle randomCircle();
	void randomShape(Shape** sh, int n);
};

#endif
