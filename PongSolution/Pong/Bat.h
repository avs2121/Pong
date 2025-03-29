#pragma once
#include <SFML/Graphics.hpp>

class Bat {
public: 
	Bat(float startX, float startY);
	sf::RectangleShape getShape();
	sf::FloatRect getPosition();

	void moveLeft();
	void moveRight();
	void update();


private:
	float batSpeed = 15.0f; 
	sf::Vector2f Position;
	sf::RectangleShape batShape; 
};