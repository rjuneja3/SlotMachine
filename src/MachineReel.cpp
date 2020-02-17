#include "MachineReel.h"
#include "Game.h"
#include <ctime>


MachineReel::MachineReel()
{
	//Sets it to random number according to time
	srand((int)(time(NULL)));
	//a random number
	m_wheelSlotNumber = (0 + rand() % 9);

}

MachineReel::~MachineReel()
{
}

void MachineReel::draw()
{
}

void MachineReel::update()
{
}

void MachineReel::clean()
{
}

void MachineReel::spin()
{
	// set the amount of spins, spin it and set the number to the wheel slot
	int spins = (10 + rand() % 50);

	for (int i = 0; i < spins; i++) {

		m_wheelSlotNumber++;
		if (m_wheelSlotNumber > 8)
		{
			m_wheelSlotNumber = 0;
		}
	}
}

int MachineReel::getWheelSlotNumber()
{
	return m_wheelSlotNumber;
}