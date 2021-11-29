#include "Shape.h"

int main(){
	RandomShape _rsg;
    Display dis;
	std::vector<Rectangle> v1;
	std::vector<Triangle> v2;
	for (int i = 0; i < 3; i++) {
		v1.push_back(_rsg.randomRectangle());
		v2.push_back(_rsg.randomTriangle());
	}
	dis.printShapeInfo(v2, v1);
	std::cout << "-----------------------------------------------------\n";
	Shape** sh = new Shape*[5];
	_rsg.randomShape(sh, 5);
	dis.printShapeInfo(sh, 5);
	
    return 0;
}