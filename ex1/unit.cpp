#include "unit.h"

unit::unit(std::string const& n,std::string const& t,int x,int y,int d,int c,int m)
{
	this->name = n;
	this->type = t;
	this->posX = x;
	this->posY = y;
	this->dam = d;
	this->cHP = c;
	this->mHP = m;
}
unit::unit(unit const& u) : name(u.name),type(u.type),posX(u.posX),posY(u.posY),dam(u.dam),cHP(u.cHP),mHP(u.mHP)
{
}
unit::~unit()
{
}

unit& unit::operator=(unit const& u)
{
	if(this != &u)
    {
		this->name = u.name;
		this->type = u.type;
		this->posX = u.posX;
		this->posY = u.posY;
		this->dam = u.dam;
		this->cHP = u.cHP;
		this->mHP = u.mHP;
	}
	return *this;
}

unit& unit::operator+=(int hp)
{
	this->cHP += hp;
	if((this->cHP) < 0)
		this->cHP = 0;
	if((this->cHP) > (this->mHP))
		this->cHP = this->mHP;
	return *this;
}
unit& unit::operator-=(int hp)
{
	this->cHP -= hp;
	if((this->cHP) < 0)
		this->cHP = 0;
	if((this->cHP) > (this->mHP))
		this->cHP = this->mHP;
	return *this;
}
std::string unit::getName() const
{
	return this->name;
}
std::string unit::getType() const
{
	return this->type;
}
int unit::getPosX() const
{
	return this->posX;
}
int unit::getPosY() const
{
	return this->posY;
}
int unit::getDam() const
{
	return this->dam;
}
int unit::getCHP() const
{
	return this->cHP;
}
int unit::getMHP() const
{
	return this->mHP;
}

std::ostream&	operator<<(std::ostream& os, unit const& unit)
{
  std::cout << unit.getName() << " is a " << unit.getType() << " in " << 
			unit.getPosX() << "/" << unit.getPosY() << " with " << unit.getCHP()
			<< "/" << unit.getMHP() << " damaging at "<< unit.getDam() ;
  return (os);
}
