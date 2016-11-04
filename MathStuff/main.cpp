#include "iostream"
#include "Vector2f.h"

int main(){
	

	Vector2f p1(100.0f, 250.0f);
	Vector2f p2(300.0f, 50.0f);
	std::cout << "V1 [" << p1.x << "  " << p1.y << "]^T\n";
	std::cout << "V2 [" << p2.x << "  " << p2.y << "]^T\n";
	std::cout << "normalizing V2...\n";
	p2.normalize();
	std::cout << "V2 [" << p2.x << "  " << p2.y << "]^T\n";
	char studder;
	std::cin >> studder;
	return 0;

}