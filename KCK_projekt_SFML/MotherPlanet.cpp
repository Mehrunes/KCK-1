#pragma once
#include "stdafx.h"
#include "Planet.h"
#include "MotherPlanet.h"
#include "Console.h"

MotherPlanet::MotherPlanet()
{
	SetPrice(50);
}


MotherPlanet::~MotherPlanet()
{
}

void MotherPlanet::powitanieDom() {
	Console::putTextLine(L"Domowa Obsluga Naziemna >> Witaj w domu. Chcesz odkupi� troch� �wie�ego towaru?");
}

void MotherPlanet::kupowanie() {
	wstring temp2;
	wstring temp = to_wstring(GetPrice());
	wstring temp3 = to_wstring(ilosc);
	temp2 = L"Domowa Obsluga Naziemna >> Mo�emy Ci sprzeda� " + temp3 + L"towaru po " + temp+L".";

	Console::putTextLine(temp2);
}
