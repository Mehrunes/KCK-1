#include "stdafx.h"

#include "BorderMan.h"
#include "Planet.h"
#include "Human.h"

void BorderMan::action(Ship& statek, Planet& p) {
	cout << "Zaplac " << Human::GetPrice() << " albo spadaj!\n";
	int  temp;
	cin >> temp;
	if ((temp == 1) && (Human::GetPrice() < statek.getMoney())) {
		cout << "Dobra, wlatuj\nWitamy na plnecie\n";
		statek.setMoney(statek.getMoney() - Human::GetPrice());
		statek.isStuck = false;
	}
	else {
		cout << "Spadaj, nie chc� Ci� tu wi�cej widzie�\n"; //Smuteg
		p.SetBoolFalse();
		statek.isStuck = false;
	}
}

//Mo�e dodamy co� w main co po up�ywie np 30-60 sekund ustawi planety na dost�pne? 0o
//Planeta matka  ustawia wszystkie na true.