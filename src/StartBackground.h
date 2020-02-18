/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
*/
#pragma once
#ifndef __START_BACKGROUND__
#define __START_BACKGROUND__
#include "DisplayObject.h"

class StartBackground : public DisplayObject
{
public:
	StartBackground();
	~StartBackground();

	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (__START_BACKGROUND__) */