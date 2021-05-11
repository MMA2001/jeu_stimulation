#pragma once
class Sac_argent
{
	Case carg;
	static int nbrsacargent;
public:
	Sac_argent(Case c)
	{
		if (c.estvide())
			carg = c;
	}
	~Sac_argent() {}
	Sac_argent(Sac_argent& s)
	{
		carg = s.carg;
	}
	void disparaitre(Zone_geo zone)
	{
		bool trouve = false;
		int i = 0;
		while (trouve == false && i < nbrsacargent)
		{
			if (zone.getargent()[i].carg == carg)
				trouve = true;
			i++;
		}
		if (trouve = true)
		{
			for (int j = i;j < nbrsacargent; j++)
				zone.getargent()[j] = zone.getargent()[j + 1];
		}
	}
	void revenir(Zone_geo zone)
	{
		zone.getargent()[nbrsacargent++] = Sac_argent(carg);
	}
	Case getcarg() const {
		return carg;
	}
	int getnbrsacargent() const
	{
		return nbrsacargent;
	}
	
};

