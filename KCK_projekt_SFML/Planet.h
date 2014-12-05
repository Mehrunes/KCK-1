#pragma once

class Planet
{
public:
	Planet();
	Planet(float x, float y, float numer);
	~Planet();

	int getX();
	int getY();

	void display();

	void SetPrice(int pprice);
	int GetPrice();
	void SetBoolTrue();
	void SetBoolFalse();
	bool CanWeShop();

private:
	int pprice;

	void setTexture(unsigned numer);
	void setPosition(float x, float y);
	bool interactive;
	
	 sf::Texture planetTexture;
	 sf::Sprite planetSprite;
};

