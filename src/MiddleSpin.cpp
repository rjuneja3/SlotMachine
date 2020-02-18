/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
*/
#include "MiddleSpin.h"
#include "Game.h"

MiddleSpin::MiddleSpin()
{
	//Loading all textures
	TheTextureManager::Instance()->load("../Assets/textures/carrot.png",
		"MiddleSpinCarrot", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/diamond.png",
		"MiddleSpinDiamond", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/apple.png",
		"MiddleSpinApple", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/ball.png",
		"MiddleSpinBall", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/banana.png",
		"MiddleSpinBanana", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherry.png",
		"MiddleSpinCherry", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/orange.png",
		"MiddleSpinOrange", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/peer.png",
		"MiddleSpinPeer", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/strawberry.png",
		"MiddleSpinStrawberry", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("MiddleSpinCarrot");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(473, 455));
	setType(MIDDLE_SPIN);
}

MiddleSpin::~MiddleSpin()
{
}

void MiddleSpin::draw()
{

}

void MiddleSpin::draw(std::string imageID)
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw(imageID, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void MiddleSpin::update()
{
}

void MiddleSpin::clean()
{
}