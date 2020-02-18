/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
*/
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