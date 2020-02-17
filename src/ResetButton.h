#pragma once
#ifndef __RESET_BUTTON__
#define __RESET_BUTTON__

#include "Button.h"

class ResetButton : public Button
{
public:
	ResetButton();
	~ResetButton();


	bool ButtonClick() override;
	int countsClickOnce();
	void setClickOnce(int clickCount);

private:
	bool m_isClicked;
	int m_pClickFlag;
};

#endif /* defined (__RESET_BUTTON__) */