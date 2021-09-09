#pragma once
#include"C_Indicator.h"
#include<thread>
class C_Conder
{
private:
	C_Temperature *init_tempreture;
	C_Indicator *indicator;
	bool isWork;
	std::thread* tread;
public:
	C_Conder()
	{
		this->init_tempreture->setTempreture(0);
		this->indicator = new C_Indicator();
		this->isWork = true;
	}

	C_Conder(unsigned short initT)
	{
		this->init_tempreture->setTempreture(initT);
		this->indicator = new C_Indicator();
		this->isWork = true;
	}

	void Work(C_Room& room) {
		while (isWork) {
			this->indicator->thinkTmp();
		}
	}

	~C_Conder()
	{
		delete indicator;
		delete init_tempreture;
		this->isWork = false;
	}
};

