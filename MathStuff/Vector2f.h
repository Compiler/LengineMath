#pragma once
#include "iostream"
#include "math.h"

class Vector2f{
public:
	Vector2f();
	Vector2f(float xd, float yd);




	float dot(Vector2f me, Vector2f you){
		std::cout << me.x << " * " << you.x << " = " << me.x *you.x << "\n";
		std::cout << me.y << " * " << you.y << " = " << me.y *you.y << "\n";
		std::cout << "together makes: " << (me.x * you.x) + (me.y * you.y) << "\n";
		return (me.x * you.x) + (me.y * you.y);
	}


	float angleBetween(Vector2f vec);
	float magnitude();

	Vector2f getProjectionOnto(Vector2f vec);
	Vector2f getNormalized();

	void normalize();
	void projectOnto(Vector2f vec);

	float x, y;


	~Vector2f();



};

