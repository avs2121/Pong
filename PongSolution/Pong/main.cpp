#include "Bat.h"
#include "Ball.h"
#include <sstream>
#include <cstdlib>
#include <conio.h>
#include <SFML/Graphics.hpp>

using namespace sf; 

int main() {
	int windowWidth = 1024; 
	int windowHeight = 768; 

	RenderWindow window(VideoMode(windowWidth, windowHeight), "Pong");

	int score = 0; 
	int lives = 3; 

	Bat bat(windowWidth / 2, windowHeight - 20);
	Ball ball(windowWidth / 2, 1);

	Text hud; 
	Font font; 
	font.loadFromFile("digital-7.ttf");
	hud.setFont(font);
	hud.setCharacterSize(75);
	hud.setFillColor(sf::Color::White);

	while (window.isOpen()) {


		Event event; 
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (Keyboard::isKeyPressed(Keyboard::Left)) {
				bat.moveLeft();
			}
			else if (Keyboard::isKeyPressed(Keyboard::Right)) {
				bat.moveRight();
			}
			else if (Keyboard::isKeyPressed(Keyboard::Escape)) {
				window.close();
			}
		}

		if (ball.getBallPosition().top > windowHeight) {
			ball.hitBottom();
			if (lives >= 1) {
				lives--;
			}
			else {
				score = 0; 
				lives = 3; 
			}
		}
		if (ball.getBallPosition().top < 0) {
			ball.reboundBatOrTop();
			score++; 
		}
		if (ball.getBallPosition().left + 10 > windowWidth || ball.getBallPosition().left < 0) {
			ball.reboundSides();
		}
		if (ball.getBallPosition().intersects(bat.getPosition())) {
			ball.reboundBatOrTop();
		}
	}



}