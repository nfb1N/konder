#pragma once
#include"C_Conder.h"
#include"SFML/Graphics.hpp"
using namespace sf;
class C_Room
{
private:
	C_Temperature temper;
	Vector3f size;
	C_Conder conder;
public:
	C_Room() {
		this->temper.setTempreture(0);
		this->size = Vector3f(0, 0, 0);

	}

	C_Room(unsigned short tmp, float widht, float hight, float lenth)
	{
		this->temper.setTempreture(tmp);
		this->size = Vector3f(widht, hight, lenth);
	}

	C_Temperature getTmp() {
		return this->temper;
		
	}
};

