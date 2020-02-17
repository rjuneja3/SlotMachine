#pragma once
#ifndef __LEFT_SPIN__
#define __LEFT_SPIN__


#include "DisplayObject.h"

class LeftSpin : public DisplayObject
{
public:
	LeftSpin();
	~LeftSpin();
	void draw() override;
	void update() override;
	void clean() override;
	void draw(std::string imageID);
};

#endif