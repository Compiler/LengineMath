#include "Vector2f.h"



Vector2f::Vector2f(): x(0), y(0){


}

Vector2f::Vector2f(float xd, float yd){
	x = xd;
	y = yd;
}


Vector2f Vector2f::getProjectionOnto(Vector2f vec){
	/*
		(u * v)
		------- * u
		(u * u)
		
	*/
	float projScalar = (dot(*this, vec)) / (dot(*this, *this));
	return Vector2f(projScalar * x, projScalar * y);

}

void Vector2f::projectOnto(Vector2f vec){
	


}


void Vector2f::normalize(){
	x = x * magnitude();
	y = y * magnitude();
}


Vector2f Vector2f::getNormalized(){
	return Vector2f(magnitude() * x, magnitude() * y);
}

float Vector2f::angleBetween(Vector2f vec){



	return 0;
}


float Vector2f::magnitude(){
	
	return sqrtf(powf(x, 2) + powf(y, 2));
}



Vector2f::~Vector2f(){
}
