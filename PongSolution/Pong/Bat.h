#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

class Bat {
public: 
	Bat(float startX, float startY);
	sf::RectangleShape getShape();
	sf::FloatRect getPosition();

	void moveLeft();
	void moveRight();
	void update();


private:
	float batSpeed = .3f; 
	sf::Vector2f Position;
	sf::RectangleShape batShape; 
};