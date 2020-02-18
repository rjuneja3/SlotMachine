/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
*/
#include "StartBackground.h"
#include "Game.h"

StartBackground::StartBackground()
{
	TheTextureManager::Instance()->load("../Assets/textures/start.jpg",
		"StartBackground", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("StartBackground");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.5));
	setType(MACHINE);
}

StartBackground::~StartBackground()
{
}

void StartBackground::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;



	TheTextureManager::Instance()->draw("StartBackground", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);

}

void StartBackground::update()
{
}

void StartBackground::clean()
{
}