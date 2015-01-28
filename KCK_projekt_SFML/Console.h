#pragma once
 class Console
{
public:
	Console();
	~Console();

	static void doYourJob(sf::Event event);
	static void display();
	static void putTextLine(wstring line);
	static wstring getCaptainPrefix();
	static wstring getBanachPrefix();

private:
	static void setFont(const char* fontLocalisation);

	static int currentLineNumber;
	static int searchCurrentLineNumber;
	static int sLineNumber;
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

