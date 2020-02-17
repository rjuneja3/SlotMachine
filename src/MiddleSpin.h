#pragma once
#ifndef __MIDDLE_SPIN__
#define __MIDDLE_SPIN__


#include "DisplayObject.h"

class MiddleSpin : public DisplayObject
{
public:
	MiddleSpin();
	~MiddleSpin();
	void draw() override;
	void update() override;
	void clean() override;
	void draw(std::string imageID);
};

#endif