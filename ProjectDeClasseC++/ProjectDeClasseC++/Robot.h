#pragma once
#include<string>
#include"Zone_geo.h"
class Robot
{
	Case cr;
	static int nbrrobot ;
public:
	Robot(Case c)
	{
		if (c.estvide)
			cr = c;
		else
			cout << "case non vide";
		nbrrobot++;
	}
	~Robot() { nbrrobot--; }
	void deplacer()
	{
		string direction;
		cin >> direction;
		switch (direction) :
		case "gauche": 
			if (cr.estvide)
			cr.getx()--;
			 else
			cout << "erreur";
			break;
		case "droite": 
			if (cr.estvide)
			cr.getx()++;
			 else
			cout << "erreur";
			break;
		case "haut": if (cr.estvide)
			cint.gety()--;
				   else
			cout << "erreur";
			break;
		case "bas": if (cr.estvide)
			cr.sety(cr.gety()++);
				  else
			cout << "erreur";
			break;

	}

	void attraper(Zone_geo zone)
	{
		int i = 0, k = 0;
		while (i < 4 && k < 1)
		{
			if (adjacent(cr, zone.getintr()[i].getcint()))
			{
				k++;
				int p = zone.getintr()[i].getnbrargent();
					while (p != 0)
					{
						zone.getintr()[i].getvolee()[p--].revenir();
						p--;
					}
				for (int j = i;j < 4;j++)
				{
					zone.getintr()[j] = zone.getintr()[j + 1];
				}

			}
			i++;
		}
	}
};

