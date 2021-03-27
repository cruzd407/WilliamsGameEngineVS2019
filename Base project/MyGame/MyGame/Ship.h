#pragma once

#include "Engine/GameEngine.h"

class Ship : public GameObject
{
public:
		// creates our ship
		Ship();

		// functions overrriden from game object
		void draw();
private:
	sf::Sprite sprite_;
};
typedef std::shared_ptr<Ship> ShipPtr;