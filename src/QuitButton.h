#pragma once
#ifndef __QUIT_BUTTON__
#define __QUIT_BUTTON__

#include "Button.h"

class QuitButton : public Button
{
public:
	QuitButton();
	~QuitButton();

	bool ButtonClick() override;
	int countsClickOnce();
	void setClickOnce(int clickCount);

private:
	bool m_isClicked;
	int m_pClickFlag;
};

#endif /* defined (__QUIT_BUTTON__) */