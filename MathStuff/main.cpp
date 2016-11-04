#include "iostream"
#include "Vector2f.h"


void printVec(Vector2f vec, int num) {
	std::cout << "V" << num << " [" << vec.x << "  " << vec.y << "]\n";
}



int main(){
	

	Vector2f p1(100.0f, 250.0f);
	Vector2f p2(300.0f, 50.0f);
	printVec(p1, 1);
	printVec(p2, 2);

	std::cout << "normalizing V1 & V2...\n\n";
	p2.normalize();

	printVec(p1, 1);
	printVec(p2, 2);

	std::cout << "\nAngle between V1 and V2 = " << p1.angleBetween(p2);


	std::cout << "\n V1 dot V2 = " << Vector2f::dot(p1, p2);
	

	char studder;
	std::cin >> studder;
	return 0;

}