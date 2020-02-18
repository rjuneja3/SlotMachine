/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
*/
#include "ResetButton.h"
#include "Game.h"

ResetButton::ResetButton()
// call super constructor
	:Button(
		"../Assets/textures/reset.png",
		"reset",
		RESET_BUTTON, glm::vec2(192, 732.0f)), m_isClicked(false)
{

}

ResetButton::~ResetButton()
{
}

bool ResetButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Reset Button Clicked!" << std::endl;
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
int ResetButton::countsClickOnce()
{
	return m_pClickFlag;
}

void ResetButton::setClickOnce(int clickCount)
{
	m_pClickFlag = clickCount;
}