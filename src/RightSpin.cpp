#include "RightSpin.h"
#include "Game.h"

RightSpin::RightSpin()
{
	//Loading all textures
	TheTextureManager::Instance()->load("../Assets/textures/carrot.png",
		"RightSpinCarrot", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/diamond.png",
		"RightSpinDiamond", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/apple.png",
		"RightSpinApple", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/ball.png",
		"RightSpinBall", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/banana.png",
		"RightSpinBanana", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherry.png",
		"RightSpinCherry", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/orange.png",
		"RightSpinOrange", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/peer.png",
		"RightSpinPeer", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/strawberry.png",
		"RightSpinStrawberry", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("RightSpinCarrot");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650, 455));
	setType(RIGHT_SPIN);
}

RightSpin::~RightSpin()
{
}

void RightSpin::draw()
{

}

void RightSpin::draw(std::string imageID)
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw(imageID, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void RightSpin::update()
{
}

void RightSpin::clean()
{
}