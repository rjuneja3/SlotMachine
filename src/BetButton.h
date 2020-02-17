#pragma once
#ifndef __BET_BUTTON__
#define __BET_BUTTON__

#include "Button.h"

class BetButton : public Button
{
public:
	BetButton();
	~BetButton();

	bool ButtonClick() override;
	int countsClickOnce();
	void setClickOnce(int clickCount);

private:
	bool m_isClicked;
	int m_pClickFlag;
};

#endif /* defined (__BET_BUTTON__) */