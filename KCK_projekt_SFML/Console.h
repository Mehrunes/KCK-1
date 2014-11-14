#pragma once
 class Console
{
public:
	Console();
	~Console();

	static void dupa(sf::Event event);

	
	static void display();

	

private:
	static void setFont(const char* fontLocalisation);

	static int currentLineNumber;
	static const int maxLineNumber = 10;					//mo�na zmienia� (liczba wi�ksza od 1)
	static  int fontSize;							//mo�na zmienia�
	static  int firstLinePositionX;					//mo�na zmienia�
	static  int firstLinePositionY;					//mo�na zmienia�
	static  int lineSpacing;							//mo�na zmienia�

	static wstring captainPrefix;	//mo�na zmienia�
	static wstring banachPrefix;		//m�na zmienia�
	

	static sf::Font font;
	static sf::Text text[maxLineNumber];

	static wstring str[maxLineNumber];
	static const char* fontLocalisation;
};

