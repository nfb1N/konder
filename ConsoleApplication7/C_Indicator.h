#pragma once
#include"C_Temperature.h"
#include"C_Room.h"
class C_Indicator
{
	C_Temperature getTemp;
public:
	C_Indicator()
	{
		getTemp.setTempreture(0);
	}

	void thinkTmp(C_Room & room)
	{
		getTemp.setTempreture(room.getTmp().getTempreture());
	}
	short compareTempreture(C_Temperature tmpinit) {
		if (tmpinit.getTempreture() > this->getTemp.getTempreture()) return 1;
		if (tmpinit.getTempreture() == this->getTemp.getTempreture()) return 0;
		if (tmpinit.getTempreture() < this->getTemp.getTempreture()) return -1;
	}

};

