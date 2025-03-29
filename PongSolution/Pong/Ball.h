#pragma once
#include <SFML/Graphics.hpp>

class Ball {
public: 
	Ball(float startX, float startY); 
	sf::FloatRect getBallPosition();
	sf::RectangleShape getShape();
	float getXVelocity();

	void reboundSides();
	void reboundBatOrTop();
	void hitBottom();
	void update();

private: 
	sf::Vector2f PositionBall; 
	sf::RectangleShape ballShape; 
	float xVelocity = .1f;
	float yVelocity = .1f;
};