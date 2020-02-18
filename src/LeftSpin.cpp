/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
*/

#include "LeftSpin.h"
#include "Game.h"

LeftSpin::LeftSpin()
{
	//Loading all textures
	TheTextureManager::Instance()->load("../Assets/textures/carrot.png",
		"LeftSpinCarrot", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/diamond.png",
		"LeftSpinDiamond", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/apple.png",
		"LeftSpinApple", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/ball.png",
		"LeftSpinBall", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/banana.png",
		"LeftSpinBanana", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherry.png",
		"LeftSpinCherry", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/orange.png",
		"LeftSpinOrange", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/peer.png",
		"LeftSpinPeer", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/strawberry.png",
		"LeftSpinStrawberry", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("LeftSpinCarrot");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(296, 455));
	setType(LEFT_SPIN);
}

LeftSpin::~LeftSpin()
{
}

void LeftSpin::draw()
{

}

void LeftSpin::draw(std::string imageID)
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw(imageID, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void LeftSpin::update()
{
}

void LeftSpin::clean()
{
}