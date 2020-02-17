#pragma once

#ifndef __MACHINE_REEL__
#define __MACHINE_REEL__

#include "GameObject.h"

class MachineReel : public GameObject
{

public:

	MachineReel();
	~MachineReel();

	void draw() override;
	void update() override;
	void clean() override;

	void spin();
	int getWheelSlotNumber();



private:

	int m_wheelSlotNumber;


};



#endif /*Defined __MACHINE_REEL__ */