#include "SpinButton.h"
#include "Game.h"

SpinButton::SpinButton()
// call super constructor
	:Button(
		"../Assets/textures/spin.png",
		"spin",
		SPIN_BUTTON, glm::vec2(750, 734.0f)), m_isClicked(false)
{
	
}

SpinButton::~SpinButton()
{
}

bool SpinButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			
			std::cout << "Spin Button Clicked!" << std::endl;
			TheSoundManager::Instance()->load("../Assets/audio/mouseclick.wav", "yay", SOUND_SFX);
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
int SpinButton::countsClickOnce()
{
	return m_pClickFlag;
}

void SpinButton::setClickOnce(int clickCount)
{
	m_pClickFlag = clickCount;
}