#include "QuitButton.h"
#include "Game.h"

QuitButton::QuitButton()
// call super constructor
	:Button(
		"../Assets/textures/quit.png",
		"quit",
		QUIT_BUTTON, glm::vec2(280, 734.0f)), m_isClicked(false)
{

}

QuitButton::~QuitButton()
{
}

bool QuitButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Quit Button Clicked!" << std::endl;
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
int QuitButton::countsClickOnce()
{
	return m_pClickFlag;
}

void QuitButton::setClickOnce(int clickCount)
{
	m_pClickFlag = clickCount;
}