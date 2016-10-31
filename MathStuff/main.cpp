#include "iostream"
#include "Vector2f.h"

int main(){
	

	float x, y;
	std::cin >> x;
	std::cin >> y;

	Vector2f vec1(x, y);

	float x1, y1;
	std::cin >> x1;
	std::cin >> y1;
	Vector2f vec2(x1, y1);
	std::cout << "\nAngle: " << vec1.angleBetween(vec2);

	char studder;
	std::cin >> studder;
	return 0;

}