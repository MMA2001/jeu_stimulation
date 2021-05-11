#pragma once
#include"Case.h"
#include"Intrus.h"
#include"Obstacle.h"
#include"Robot.h"
#include"Sac_argent.h"
#include<Vector>
class Zone_geo
{
	int ligne, colonne;
	Case **grille;
	vector<Sac_argent*> argent;
	vector<Robot> rob;
	vector<Intrus> intr;
	Case* case_sortie;
	Obstacle* obs;
public:
	Zone_geo(int n, int m):ligne(n),colonne(m)
	{
		grille = new Case[ligne][colonne];
		for (int i = 0;i < ligne;i++)
		{
			for (int j = 0;j < colonne;j++)
			{
				grille[i][j] = Case(i, j);
			}
		}
		int max_argent = rand((ligne * colonne) / 2);
		argent = new Sac_argent[max_argent];
		for (int k = 0;k < max_argent;k++)
		{
			int  i = rand(ligne);
			int j = rand(colonne);
			Case c(i, j);
			if c.estvide()
				argent[k] = Sac_argent(c);
		}
		int max_obstacle = rand((ligne * colonne) / 2)
			obs = new Obstacle[max_obstacle];
		for (int k = 0;k < max_obstacle;k++)
		{
			int  i = rand(ligne);
			int j = rand(colonne);
			Case c(i, j);
			if c.estvide()
				obs[k] = Obstacle(c);
		}
		int m = 2 * (ligne + colonne - 2);
		case_sortie = new Case[m];
		 int 	k = 0;
		for (int i = 0;i < colonne;i++)
		{
			if (grille[0][i].estvide()) {

				case_sortie[k] = grille[0][i];
				k++;
			}
		}
		for (int i = 1;i < ligne;i++)
		{
			if (grille[i][0].estvide()) {

				case_sortie[k] = grille[i][0];
				k++;
			}
		}
		for (int i = 1;i < colonne;i++)
		{
			if (grille[ligne - 1][i].estvide()) {

				case_sortie[k] = grille[ligne - 1][i];
				k++;
			}
		}
		for (int i = 1;i < ligne - 1;i++)
		{
			if (grille[i][colonne - 1].estvide()) {

				case_sortie[k] = grille[i][colonne - 1];
				k++;
			}
		}

	}
	~Zone_geo()
	{
	  
	}
	Sac_argent* getargent() const
	{
		return argent;
	}
	Intrus* getintr() const
	{
		return intr;
	}
	Case* getcase_sortie() const
	{
		return case_sortie;
	}


};

