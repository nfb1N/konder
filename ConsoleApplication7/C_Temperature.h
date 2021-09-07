#pragma once
class C_Temperature
{
private:
	unsigned short temperature;
public:
	C_Temperature()
	{
		this->temperature = 0;
	}

	C_Temperature(unsigned short _t)
	{
		this->temperature = _t;
	}

	unsigned short getTempreture() {
		return this->temperature;
	}

	void setTempreture(unsigned short _t) {
		this->temperature = _t;
	}

	void increse() {
		this->temperature++;
	}

	void decrese() {
		this->temperature--;
	}
};

