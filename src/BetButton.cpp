/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020 
*/
#include "BetButton.h"
#include "Game.h"

BetButton::BetButton()
// call super constructor
	:Button(
		"../Assets/textures/bet.png",
		"bet",
		BET_BUTTON, glm::vec2(675, 734.0f)), m_isClicked(false)
{

}

BetButton::~BetButton()
{
}

//Button click
bool BetButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Bet Button Clicked!" << std::endl;
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
int BetButton::countsClickOnce()
{
	return m_pClickFlag;
}

void BetButton::setClickOnce(int clickCount)
{
	m_pClickFlag = clickCount;
}