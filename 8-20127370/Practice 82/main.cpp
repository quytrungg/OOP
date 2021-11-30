#include "Shape.h"

int main(){
	RandomShape _rsg;
    Display dis;
	std::vector<Triangle> v1;
	std::vector<Rectangle> v2;
	for (int i = 0; i < 3; i++) {
		v2.push_back(_rsg.randomRectangle());
		v1.push_back(_rsg.randomTriangle());
	}
	dis.printShapeInfo(v1, v2);
	std::cout << "-----------------------------------------------------\n";
	Shape** sh = new Shape*[5];
	_rsg.randomShape(sh, 5);
	dis.printShapeInfo(sh, 5);
	delete[] sh;
    return 0;
}