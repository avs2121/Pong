#include "Bat.h"
#include "Ball.h"
#include <sstream>
#include <cstdlib>
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

}