#include "iostream"
#include "Mat2.h"


void printMat(Mat2 mat, int num) {
	std::cout << "\nM" << num << " [" << mat.elementAt(0, 0) << "  " << mat.elementAt(1, 0) << "]\n   [" << mat.elementAt(0, 1) << "  " << mat.elementAt(1, 1) << "]\n";
}



int main(){

	Mat2 mat1(1.0f, 2.0f, 0.0f, 1.0f);
	Mat2 mat2(12.0f, 30.0f, 5.0f, 15.0f);

	printMat(mat1, 1);
	printMat(mat2, 2);
	mat1.dot(mat2);
	std::cout << "\nDot of M1 & M2 = ";
	printMat(mat1, 3);
	
	char studder;
	std::cin >> studder;
	return 0;

}