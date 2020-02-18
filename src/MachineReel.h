/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
*/
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