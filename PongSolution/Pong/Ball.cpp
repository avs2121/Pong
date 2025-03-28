#include "Ball.h"

Ball::Ball(float startX, float startY)
{
	PositionBall.x = startX; 
	PositionBall.y = startY; 
	ballShape.setSize(sf::Vector2f(10, 10));
	ballShape.setPosition(PositionBall);
}

sf::FloatRect Ball::getBallPosition()
{
	return ballShape.getGlobalBounds();
}

sf::RectangleShape Ball::getShape()
{
	return ballShape; 
}

float Ball::getXVelocity()
{
	return xVelocity;
}

void Ball::reboundSides()
{
	xVelocity = -xVelocity; 
}

void Ball::reboundBatOrTop()
{
	PositionBall.y -= (yVelocity * 30);
	yVelocity = -yVelocity;
}

void Ball::hitBottom()
{
	PositionBall.y = 1; 
	PositionBall.x = 500; 
}

void Ball::update()
{
	PositionBall.x += xVelocity;
	PositionBall.y += yVelocity; 
	ballShape.setPosition(PositionBall);
}
