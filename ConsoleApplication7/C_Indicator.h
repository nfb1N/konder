#pragma once
#include"C_Temperature.h"
#include"C_Room.h"
class C_Indicator
{
	C_Temperature gettingTemp;
public:
	C_Indicator()
	{
		gettingTemp.setTempreture(0);
	}

	void thinkTmp(C_Room & room)
	{
		gettingTemp.setTempreture(room.getTmp().getTempreture());
	}
	short compareTempreture(C_Temperature tmpinit) {
		if (tmpinit.getTempreture() > this->gettingTemp.getTempreture()) return 1;
		if (tmpinit.getTempreture() == this->gettingTemp.getTempreture()) return 0;
		if (tmpinit.getTempreture() < this->gettingTemp.getTempreture()) return -1;
	}

};

