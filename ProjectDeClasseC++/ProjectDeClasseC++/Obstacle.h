#pragma once
class Obstacle
{
	Case cobs;
		static int  nbrobstacle;
		Obstacle(Case c)
		{
			if (c.estvide())
				cobs = c;
			nbrobstacle++;
		}
		~Obstacle() { nbrobstacle--; }
};

