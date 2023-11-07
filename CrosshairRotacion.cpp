#include<SFML/Graphics.hpp>

using namespace sf;

 Texture rot;
 Sprite rota;
 

int main(){
	sf::RenderWindow App(sf::VideoMode(512, 512, 32),
		" CrosshairRotacion ");
	
	App.setFramerateLimit(60);

	rot.loadFromFile("crosshair.png");

	rota.setTexture(rot);
	//rota.setOrigin(75,75);
	rota.setOrigin(rota.getLocalBounds().width / 2, rota.getLocalBounds().height / 2);
	rota.setPosition(250, 250);

	

	while (App.isOpen())
	{

		rota.rotate(1.5f);

		    App.clear(sf::Color::White);
			App.draw(rota);
			App.display();

	}

	return 0;

}