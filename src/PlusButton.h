#pragma once
#ifndef __PLUS_BUTTON__
#define __PLUS_BUTTON__

#include "Button.h"

class PlusButton : public Button
{
public:
	PlusButton();
	~PlusButton();


	bool ButtonClick() override;
	int countsClickOnce();
	void setClickOnce(int clickCount);

private:
	bool m_isClicked;
	int m_pClickFlag;
};

#endif /* defined (__PLUS_BUTTON__) */