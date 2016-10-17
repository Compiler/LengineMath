#pragma once
class Vector2f{
public:
	Vector2f();




	Vector2f projectOnto(Vector2f vec);
	float angleBetween(Vector2f vec);
	Vector2f normalize();



	float x, y;


	~Vector2f();



};

