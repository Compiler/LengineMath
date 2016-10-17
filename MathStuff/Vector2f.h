#pragma once

#include "math.h"

class Vector2f{
public:
	Vector2f();
	Vector2f(float xd, float yd);




	float angleBetween(Vector2f vec);
	float magnitude();

	Vector2f projectOnto(Vector2f vec);
	Vector2f getNormalized();

	void normalize();


	float x, y;


	~Vector2f();



};

