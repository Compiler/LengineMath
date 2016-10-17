#include "Vector2f.h"



Vector2f::Vector2f(): x(0), y(0){


}

Vector2f::Vector2f(float xd, float yd){
	x = xd;
	y = yd;
}


Vector2f Vector2f::projectOnto(Vector2f vec){



}


void Vector2f::normalize(){
	x = x * magnitude();
	y = y * magnitude();
}


Vector2f Vector2f::getNormalized(){
	return Vector2f(magnitude() * x, magnitude() * y);
}

float Vector2f::angleBetween(Vector2f vec){

}


float Vector2f::magnitude(){
	return sqrtf(pow(x, 2) + pow(y, 2));
}



Vector2f::~Vector2f(){
}
