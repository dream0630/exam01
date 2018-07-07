#ifndef UNIT_H
#define UNIT_H
#include <iostream>
class unit
{
	public:
		
		unit(std::string const& n = "",std::string const& t = "",int x = 0,int y = 0,int d = 0,int c = 0,int m = 0);
		unit(unit const& u);
		~unit();
		unit& operator = (unit const& u);
		unit& operator += (int hp);
		unit& operator -= (int hp);
		std::string getName() const;
		std::string getType() const;
		int getPosX() const;
		int getPosY() const;
		int getDam() const;
		int getCHP() const;
		int getMHP() const;
		
	protected:
		std::string name;
		std::string type;
		int posX;
		int posY;
		int dam;
		int cHP;	
		int mHP;
		
};
std::ostream& operator<<(std::ostream& os, unit const& unit);
#endif
