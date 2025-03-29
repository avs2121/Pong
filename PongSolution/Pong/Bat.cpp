#include "Bat.h"


Bat::Bat(float startX, float startY)
{
	Position.x = startX;
	Position.y = startY;
	batShape.setSize(sf::Vector2f(100, 10));
	batShape.setPosition(Position);
}

sf::RectangleShape Bat::getShape()
{
	return batShape; 
}

sf::FloatRect Bat::getPosition()
{
	return batShape.getGlobalBounds();
}

void Bat::moveLeft()
{
	Position.x -= batSpeed; 
}

void Bat::moveRight()
{
	Position.x += batSpeed; 
}

void Bat::update()
{
	batShape.setPosition(Position);
}
