#pragma once
class Mat2{
public:
	Mat2(float topLeft, float topRight, float bottomLeft, float bottomRight);


	void dotMat2(Mat2 matrix);
	Mat2 getDotMat2(Mat2 matrix);
	~Mat2();


private:

	float mat[2][2];

};

