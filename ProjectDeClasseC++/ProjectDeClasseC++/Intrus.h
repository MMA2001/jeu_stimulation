#pragma once
#include<string>
#include"Zone_geo.h"
class Intrus
{
    int nbrargent;
    Case cint;
    Sac_argent* volee;
	static int nbrint;
public:
	Intrus(Case c)
	{
		if (c.estvide())
			cint = c;
		else
			cout << "case non vide";
		nbrargent = 0;
		nbrint++;
		volee = new Sac_argent[2];
	}
	~Intrus()
	{
		delete[] volee;
		nbrint--;
	}
	void deplacer()
	{
		String direction;
		cin >> direction;
		switch direction :
		case "gauche": if (cint.estvide)
			cint.getx()--;
					 else
			cout << "erreur";
			break;
		case "droite": if (cint.estvide)
			cint.getx()++;
					 else
			cout << "erreur";
			break;
		case "haut": if (cint.estvide)
			cint.gety()--;
				   else
			cout << "erreur";
			break;
		case "bas": if (cint.estvide)
			cint.gety()++;
				  else
			cout << "erreur";
			break;
	}
	void voler(Zone_geo zone)
	{
		int i = 0, k = 0;
		while (i < sac_argent::getnbrsacargent() && nbrargent < 2 && k < 1)
		{
			if adjacent(cint, zone.getargent()[i].getarg())
			{
				nbrargent++;
				vloee[nbrargent--] = zone.getargent()[i]
					k++;
				zone.getargent()[i].disparaitre();
			}

			i++;
		}
	}
	void sortir(Zone_geo zone)
	{
		if (nbrargent == 2)
		{
			bool test;
			int i = 0;
			while (test = false && i < m)
			{
				if (cin == zone.getcase_sortie()[i])
				{
					test = true;
				}
				i++;
			}
			if (test == true)
			{
				for (int j = i;j < 4; j++)
				{
					zone.getintr()[j] = zone.getintr()[j + 1];
				}
			}
		}
		int getnbrint() 
		{
			return nbrint;
		}
		sac_argent* getvolee() const
		{
			return volee;
		}
		int getnbrsacargent() const
		{
			return nbrargent;
		}
		Case getcint() const {
			return cint;
		}
};

