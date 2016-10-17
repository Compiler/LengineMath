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
	Vector2f vec2(x, y);
//	vec1.projectOnto(vec2);
	//vec1.normalize();
	//std::cout << "Projection: " << vec1.x << "," << vec1.y;
	std::cout << vec1.magnitude();

	char studder;
	std::cin >> studder;
	return 0;

}